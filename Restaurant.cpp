#include "Restaurant.h"

using namespace std;

Restaurant::Restaurant()
{
    this->accountingSystem = nullptr;
}

void Restaurant::setAccountingSystem(AccountingSystem *as)
{
    this->accountingSystem = as;
}

AccountingSystem *Restaurant::getAccountingSystem()
{
    return this->accountingSystem;
}

void Restaurant::addValet(Valet *valet)
{
    valets.push_back(valet);
}

void Restaurant::addTable(Table *table)
{
    tables.push_back(table);
}

void Restaurant::addManager(TableVisitor *manager)
{
    managers.push_back(manager);
}

void Restaurant::initialCustomerHandling(Customer *customer)
{
    CustomerHandler *customerHandler = new CustomerHandler();
    customerHandler->add(new ValletHandler());
    customerHandler->add(new AssignTable(tables));
    customerHandler->handleRequest(customer);
    delete customerHandler;
}

void Restaurant::addWaiter(Waiter *waiter)
{
    waiters.push_back(waiter);
}

void Restaurant::requestBill(Table *table)
{
    int choice = 0;
    Bill* currBill = table->getBill();
    cout<<"Would you like to split the bill?" << endl;
    cout<<"1. Yes" << endl;
    cout<<"2. No" << endl;
    cin >> choice;
    if(choice == 1){
        for(int i = 0; i < (int)table->getCustomers().size(); i++){
            Customer* currCustomer = table->getCustomers()[i];
            Bill* customerBill = currBill->findBill(currCustomer->getCustomerID());
            currCustomer->payBill(customerBill, accountingSystem);   
        }
    }else{
        cout<<"Your bill is: " << currBill->getBillTotal() << endl;

    }
}

void Restaurant::visitTable()
{
    int ranVal = rand() % managers.size();
    int ranTable = rand()% tables.size();
    TableVisitor* manager = managers[ranVal];
    Table* table = tables[ranTable];
    while ((int) table->getCustomers().size() <= 0)
    {
        ranTable = rand()% tables.size();
        table = tables[ranTable];
    }
    
    for(int i = 0; i < (int)table->getCustomers().size(); i++){
        table->getCustomers()[i]->accept(manager);
    }
}

void Restaurant::payTab(Customer *customer, TabCaretaker *tabCaretaker)
{
    if(customer != nullptr && tabCaretaker != nullptr)
    {
        for(int i = 0;i < (int)tabCaretaker->getMementos().size();i++)
        {
            if(tabCaretaker->getMementos()[i]->getCustomerID() == customer->getCustomerID())
            {
                std::cout<< customer->getCustomerName() << " has come back to pay their tab..." <<std::endl;
                tabCaretaker->getMementos()[i]->printMemento();
                customer->getTab()->restoreMemento(tabCaretaker->getMementos()[i]);
                std::cout << customer->getCustomerName() << " paid the tab..."<<std::endl;
                tabCaretaker->removeMemento(tabCaretaker->getMementos()[i]);
                //delete customer;

            }
        }

    }
    
}

Restaurant::~Restaurant()
{
    for(int i = 0; i < (int)valets.size(); i++)
    {
        delete valets[i];
    }
    valets.clear();
    for(int i = 0; i < (int)tables.size(); i++)
    {
        delete tables[i];
    }
    tables.clear();
    for(int i = 0; i < (int)managers.size(); i++)
    {
        delete managers[i];
    }
    managers.clear();
    for(int i = 0; i < (int)waiters.size(); i++)
    {
        delete waiters[i];
    }
    waiters.clear();

    if(accountingSystem != nullptr){
        delete accountingSystem;
        accountingSystem = nullptr;
    }
}