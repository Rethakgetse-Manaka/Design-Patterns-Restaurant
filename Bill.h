#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "Order.h"

class Bill
{
private:

public:
    Bill();
    virtual void printBill() ;
    virtual void addPerson(Bill* Bill) ;
    virtual Bill* findBill(int customerId);
    virtual void removePerson(int customerId) ;
    virtual Order* getOrder() =0;
    virtual double getBillTotal() =0;
    virtual ~Bill();
};

#endif