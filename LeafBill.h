#ifndef LEAFBILL_H
#define LEAFBILL_H

#include "Bill.h"

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
    Order* getOrder();
    double getBillTotal();
    void printBill();
    virtual ~LeafBill();
};

#endif