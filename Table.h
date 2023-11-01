#ifndef Table_H
#define Table_H
#include "Order.h"
class Customer;
class Bill;
class Table
{
    private:
        std::vector<Order*> orders;
        Bill* bill;
        std::vector<Customer*> customers;
        int tableNumber;
    public:
        
        std::vector<Order*> getOrders();
        void readyForBill(Waiter* w);
        void placeOrder(Order* o,Waiter* w);

    


};
#endif