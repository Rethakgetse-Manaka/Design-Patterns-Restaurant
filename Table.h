#ifndef Table_H
#define Table_H
#include "Order.h"
#include <iostream>
#include <algorithm>
class Customer;
class Bill;
class TableState;
class Waiter;

class Table
{
    private:
        Bill* bill;
        std::vector<Customer*> customers;
        int tableNumber;
        int maxNumOfCustomers;
        TableState* state;
        int count;
        Waiter* waiter;

    public:
        void addCustomer(Customer* c);
        std::vector<Customer*> getCustomers();
        void removeCustomer(Customer* c);
        void readyForBill(Waiter* w);
        void placeOrder(Order* o,Waiter* w);
        void setBill(Bill * b);
        Bill* getBill();
        void setTableNumber(int tb);
        void setWaiter(Waiter* waiter);
        
        
        //added for state Pattern
        Table(int tableNumber);

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
        void setWaiter(Waiter* w);
        bool isFree();


    


};
#endif