#ifndef Table_H
#define Table_H
#include "Order.h"
#include <algorithm>
class Customer;
class Bill;
class TableState;
class Table
{
    private:
        std::vector<Order*> orders;
        Bill* bill;
        std::vector<Customer*> customers;
        int tableNumber;
        

    public:
        int getTableNumber();
        std::vector<Order*> getOrders();
        void addCustomer(Customer* c);
        void removeCustomer(Customer* c);
        void readyForBill(Waiter* w);
        void placeOrder(Order* o,Waiter* w);
        void setBill(Bill * b);
        Bill* getBill();
        void setTableNumber(int tb);


    


};
#endif