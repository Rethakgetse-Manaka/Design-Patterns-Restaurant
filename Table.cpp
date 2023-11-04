#include "Table.h"
#include "Waiter.h"
#include "Customer.h"
#include "TableState.h"
using namespace std;

void Table::addCustomer(Customer *c)
{
    customers.push_back(c);
    c->setTableID(tableNumber);
}


std::vector<Customer *> Table::getCustomers()
{
    return customers;
}

void Table::removeCustomer(Customer *c)
{

    customers.erase(std::remove(customers.begin(), customers.end(), c), customers.end());
}

void Table::readyForBill(Waiter *w)
{

    std::cout << "Table " << tableNumber << " is ready for a bill...";
    w->presentBill(this);
    cout << "Would you like to pay now or later?" << endl;
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
                currCustomer->payBill(customerBill);   
            }
        }else{
            cout<<"Your bill is: " << bill->getBillTotal() << endl;
            int ranCustomer = rand() % customers.size();
            Customer* currCustomer = customers[ranCustomer];
            currCustomer->payBill(bill);
        }
    }else{
        cout<<"Adding your bill to your tab account..." << endl;
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

void Table::setTableNumber(int tb)
{
    tableNumber = tb;
}

Table::Table(int tableNumber) : tableNumber(tableNumber), state(new Free()) {}

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
    return waiter;
}

Table::~Table() {
    if(state != NULL){
        delete state;
    }
    
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

void Table::setWaiter(Waiter *w)
{
    this->waiter = w;
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