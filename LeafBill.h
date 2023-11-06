#ifndef LEAFBILL_H
#define LEAFBILL_H

#include "Bill.h"
#include "Order.h"

class LeafBill: public Bill
{
private:
    Order* order;
    int billId;
    double tip;
public:
    LeafBill(Order* ord, double tip);
    void setTip(double tip);
    double getTip();
    virtual Bill* findBill(int customer);
    virtual Order* getOrder();
    double getBillTotal();
    void printBill();
    virtual ~LeafBill();
};

#endif