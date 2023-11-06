#include "Table.h"
#include "Waiter.h"
#include "Customer.h"
#include "TableState.h"
using namespace std;

void Table::addCustomer(Customer *c)
{
    if(count <= 3)
    {
        customers.push_back(c);
        c->setTableID(tableNumber);
        count++;
        if(count > 3)
        {
            state->occupy(this);
        }

    }
    else
    {
        std::cout << "Table is full" << std::endl;
        
    }
   
    
}

std::vector<Customer *> Table::getCustomers()
{
    return customers;
}

void Table::removeCustomer(Customer *c)
{
    customers.erase(std::remove(customers.begin(), customers.end(), c), customers.end());
}

void Table::readyForBill(Waiter *w, AccountingSystem* aS)
{

    std::cout << "Table " << tableNumber << " is ready for a bill...";
    w->presentBill(this);
    cout << endl << "Would you like to pay now or later?" << endl;
    cout << "1. Pay now" << endl;
    cout << "2. Pay later" << endl;
    int paymentChoice = 0;
    cin >> paymentChoice;
    if (paymentChoice == 1)
    {
        int choice = 0;
        cout << "Would you like to split the bill?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> choice;
        if(choice == 1){
            for(int i = 0; i < (int)customers.size(); i++){
                Customer* currCustomer = customers[i];
                Bill* customerBill = bill->findBill(currCustomer->getCustomerID());
                currCustomer->payBill(customerBill, aS);   
                currCustomer->leave();
            }
        }else{
            cout<<"Your bill is: " << bill->getBillTotal() << endl;
            int ranCustomer = rand() % customers.size();
            Customer* cur = customers[ranCustomer];
            // currCustomer->payBill(bill, aS);
            for(int i = 0; i < (int)customers.size(); i++){
                Customer* currCustomer = customers[i];
                Bill* customerBill = bill->findBill(currCustomer->getCustomerID());
                cur->payBill(customerBill, aS); 
                currCustomer->leave();
            }
        }
    }else{
        
        int choice = 0;
        cout << "Would you like to split the Tab?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> choice;
        if(choice == 1){
            for(int i = 0; i < (int)customers.size(); i++){
                Customer* currCustomer = customers[i];
                Bill* customerBill = bill->findBill(currCustomer->getCustomerID());
                Tab* t = new Tab(currCustomer->getCustomerID(),currCustomer->getCustomerName(),customerBill->getBillTotal());
                tabCaretaker->addMemento(t->getMemento());
                currCustomer->setTab(t);
                cout<<"Your tab is: " << customerBill->getBillTotal() << endl;
                cout<<"Adding "<<currCustomer->getCustomerName()<<"'s bill to tab account..." << endl;
                currCustomer->leave();
                  
            }
        }else{
            cout<<"Your tab is: " << bill->getBillTotal() << endl;
            int ranCustomer = rand() % customers.size();
            Customer* currCustomer = customers[ranCustomer];
            Tab* t = new Tab(currCustomer->getCustomerID(),currCustomer->getCustomerName(),bill->getBillTotal());
            currCustomer->setTab(t);
            tabCaretaker->addMemento(t->getMemento());
            cout<<"Adding "<<currCustomer->getCustomerName()<<"'s bill to tab account..." << endl;
            currCustomer->leave();
        }
        

    }
}

void Table::placeOrder(Order* o,Waiter* w)
{
    std::cout << w->getName() <<" is the waiter taking the order from "<<o->getCustomerName() << " at table "<<tableNumber;
    w->receiveOrder(o);
}

void Table::setBill(Bill *b)
{
    bill = b;
}

Bill *Table::getBill()
{
    return bill;
}



void Table::setWaiter(Waiter *waiter)
{
    this->waiter = waiter;
}

Table::Table(int tableNumber) : tableNumber(tableNumber), state(new Free()), count(0) {
    this->bill = nullptr;
}

void Table::setCaretaker(TabCaretaker *t)
{
    tabCaretaker = t;
}

void Table::setState(TableState* newState) {
    if (state) {
        delete state;
    }
    state = newState;
}

TableState* Table::getState() const {
    return state;
}

Customer *Table::getCustomer(int custID)
{
    for(size_t i = 0;i < customers.size();i++)
    {
        if(customers[i]->getCustomerID() == custID)
        {
            return customers[i];
        }
    }
    return nullptr;
}

Waiter *Table::getWaiter()
{
    return this->waiter;
}

Table::~Table() {
    if(state != NULL){
        delete state;
    }
    
    if(bill != NULL){
        delete bill;
    }
    // if(tabCaretaker != NULL){
    //     delete tabCaretaker;
    // }
}


void Table::occupyTable() {
    if (state) {
        state->occupy(this);
    } else {
        std::cout << "Table " << tableNumber << " is already occupied." << std::endl;
    }
}

void Table::freeTable() {
    if (state) {
        state->free(this);
    } else {
        std::cout << "Table " << tableNumber << " is already free." << std::endl;
    }
}

void Table::combineTable() {
    if (state) {
        state->combine(this);
    } else {
        std::cout << "Table " << tableNumber << " is not assigned any state." << std::endl;
    }
}

void Table::splitTable() {
    if (state) {
        state->split(this);
    } else {
        std::cout << "Table " << tableNumber << " is not assigned any state." << std::endl;
    }
}

int Table::getTableNumber() const
{
    return tableNumber;
}

void Table::printTableStatus() const {
    state->getTableStatus();
}

bool Table::isFree()
{
    if(state != nullptr)
    {
        if(state->getTableStatus() == "Free")
            return true;
    }
    return false;
}