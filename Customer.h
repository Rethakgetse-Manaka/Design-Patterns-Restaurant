#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "CustomerState.h"
#include "Order.h"
#include "OrderHandler.h"
#include <string>
#include <iostream>
#include "Bill.h"
#include "Neutral.h"

class Customer
{
private:
    int customerID;
    int valletID;
    int tableID;
    std::string customerName;
    CustomerState *state;
    Order *order;
    int tabID;
    double tip;
public:
    Customer();
    Customer(int id, std::string name);
    ~Customer();
    int getCustomerID();
    std::string getCustomerName();
    CustomerState *getState();
    OrderHandler *requestWaiter();
    void setState(CustomerState *s);
    void payBill(Bill* bill);
    void placeOrder();
    Order* menu();
    void complain();
    void increaseTip();
    void decreaseTip();
    void eat();
};

#endif