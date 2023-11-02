#ifndef LEAFBILL_H
#define LEAFBILL_H

#include "Bill.h"

class LeafBill: public Bill
{
private:
    Order* order;
    int billId;
    
public:
    LeafBill(Order* ord);
    Order* getOrder();
    double getBillTotal();
    void printBill();
    ~LeafBill();
};

#endif