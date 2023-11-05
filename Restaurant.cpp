#include "Restaurant.h"

using namespace std;

Restaurant::Restaurant()
{
}

void Restaurant::setAccountingSystem(AccountingSystem *as)
{
    this->accountingSystem = as;
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

void Restaurant::visitTable(TableVisitor *tableVisitor)
{
    int ranVal = rand() % managers.size();
    int ranTable = rand()% tables.size();
    TableVisitor* manager = managers[ranVal];
    Table* table = tables[ranTable];
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
                customer->getTab()->restoreMemento(tabCaretaker->getMementos()[i]);
                std::cout << customer->getCustomerName() << " paid the tab..."<<std::endl;
                tabCaretaker->removeMemento(tabCaretaker->getMementos()[i]);
                customer->getTable()->removeCustomer(customer);
            }
        }

    }
    
}

Restaurant::~Restaurant()
{
}