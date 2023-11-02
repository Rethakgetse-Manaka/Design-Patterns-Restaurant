#ifndef COMPOSITEBILL_H
#define COMPOSITEBILL_H

#include "Bill.h"
#include <vector>

class CompositeBill: public Bill
{
private:
    std::vector<Bill*> tableBills;
public:
    CompositeBill();
    void printBill();
    void addPerson(Bill* Bill);
    void removePerson(Bill* Bill);
    double getBillTotal();
    Order* getOrder();
    ~CompositeBill();
};

#endif