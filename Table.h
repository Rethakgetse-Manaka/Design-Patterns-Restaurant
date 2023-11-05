#ifndef Table_H
#define Table_H
#include "Order.h"
#include "AccountingSystem.h"
#include <iostream>
#include <algorithm>
#include "TabCaretaker.h"
#include "Tab.h"
class Customer;
class Bill;
class TableState;
class Waiter;

/**
 * @brief The Table class represents a table in a restaurant.
 * 
 * It contains information about the customers seated at the table, the table number, the table state, the waiter serving the table, and the bill for the table.
 * It also provides methods to add and remove customers, place orders, set and get the bill, set and get the waiter, and change the table state.
 */
class Table
{
    private:
        Bill* bill;
        std::vector<Customer*> customers;
        int tableNumber;
        int count;
        TableState* state;
        Waiter* waiter;
        TabCaretaker* tabCaretaker;

    public:
        void addCustomer(Customer* c);
        std::vector<Customer*> getCustomers();
        void removeCustomer(Customer* c);
        void readyForBill(Waiter* w, AccountingSystem* as);
        void placeOrder(Order* o,Waiter* w);
        void setBill(Bill * b);
        Bill* getBill();
        
        void setWaiter(Waiter* waiter);

        
        
        //added for state Pattern
        Table(int tableNumber);
        void setCaretaker(TabCaretaker* t);

        ~Table();
        void occupyTable();
        void freeTable();
        void combineTable();
        void splitTable();
        int getTableNumber() const;
        void printTableStatus() const;
        void setState(TableState* newState);
        TableState* getState() const;
        Customer* getCustomer(int custID);
        Waiter* getWaiter();
        bool isFree();
};
#endif