#ifndef LEAFBILL_H
#define LEAFBILL_H

#include "Bill.h"
#include "Order.h"

class LeafBill: public Bill
{
private:
    Order* order;
public:
    LeafBill(Order* ord);
    void printBill();
    ~LeafBill();
};

#endif