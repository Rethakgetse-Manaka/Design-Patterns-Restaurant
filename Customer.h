#ifndef CUSTOMER_H
#define CUSTOMER_H

class TableVisitor;
// #include "CustomerState.h"
#include "Order.h"
// #include "OrderHandler.h"
#include <string>
#include <vector>
#include <iostream>
#include "Waiter.h"
// #include "Bill.h"
// #include "Neutral.h"
// #include "ComplaintsManager.h"
// #include "AdminManager.h"


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
    int getTableID();
    CustomerState *getState();
    Order* getOrder();
    int getTabID();
    double getTip();
    void setTableID(int id);
    void setValletID(int id);
    OrderHandler *requestWaiter();
    void setState(CustomerState *s);
    void payBill(Bill* bill);
    void placeOrder();
    Order* menu();
    void complain();
    void resolveComplaint();
    void resolveService();
    void increaseTip();
    void decreaseTip();
    void respondWithSatifaction();
    void respondWithDissatifaction();
    void eat();
    // void leave();
    void accept(TableVisitor *v);
};

#endif