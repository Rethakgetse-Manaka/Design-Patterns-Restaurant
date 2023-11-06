#ifndef LEAFBILL_H
#define LEAFBILL_H

#include "Bill.h"

/**
 * @brief LeafBill class represents a single bill for a customer's order.
 * 
 */
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
    Bill* findBill(int customer);
    Order* getOrder();
    double getBillTotal();
    void printBill();
    virtual ~LeafBill();
};

#endif