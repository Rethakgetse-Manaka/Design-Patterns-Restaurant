#ifndef COMPOSITEBILL_H
#define COMPOSITEBILL_H

#include "Bill.h"
#include <vector>

class CompositeBill: public Bill
{
private:
    std::vector<Bill*> tableBills;
    Order* order;
    int billId;
public:
    CompositeBill(Order* ord);
    void printBill();
    void addPerson(Bill* Bill);
    void removePerson(Bill* Bill);
    ~CompositeBill();
};

#endif