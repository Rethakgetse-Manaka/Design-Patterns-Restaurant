#include "Table.h"
#include "TableState.h"
// #include "Waiter.h"
// #include "Customer.h"
#include <iostream>

// std::vector<Order*> Table::getOrders()
// {
//     return orders;
// }

// void Table::addCustomer(Customer *c)
// {
//     customers.push_back(c);
//     c->setTableID(tableNumber);
    
// }

// void Table::removeCustomer(Customer *c)
// {

//     customers.erase(std::remove(customers.begin(), customers.end(), c), customers.end());



// }

// void Table::readyForBill(Waiter* w)
// {

//     std::cout << "Table "<<tableNumber<<" is ready for a bill...";
//     w->presentBill(this);
// }

// void Table::placeOrder(Order* o,Waiter* w)
// {
//     std::cout << w->getName() <<" is the waiter taking the order from "<<o->getCustomerName() << " at table "<<tableNumber;
//     w->receiveOrder(o);
// }

// void Table::setBill(Bill *b)
// {
//     bill = b;
// }

// Bill *Table::getBill()
// {
//     return bill;
// }

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

Table* Table::getTable(int number) const {
    // Implement logic to retrieve a table by its number.
    return nullptr; 
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

int Table::getTableNumber() const {
    return tableNumber;
}

void Table::printTableStatus() const {
    state->getTableStatus();
}