#ifndef Table_H
#define Table_H
// #include "Order.h"

class Customer;
class Bill;
class TableState;
class Table
{
    private:
        //std::vector<Order*> orders;
        //Bill* bill;
        //std::vector<Customer*> customers;
        int tableNumber;
        //added for state pattern 
        TableState* state;
    public:

        // std::vector<Order*> getOrders();
        // void addCustomer(Customer* c);
        // void removeCustomer(Customer* c);
        // void readyForBill(Waiter* w);
        // void placeOrder(Order* o,Waiter* w);
        // void setBill(Bill * b);
        // Bill* getBill();
        void setTableNumber(int tb);
        
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
        Table* getTable(int number) const;
        TableState* getState() const;
};
#endif