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
    void printBill();
    ~LeafBill();
};

#endif