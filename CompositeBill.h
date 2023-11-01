#ifndef COMPOSITEBILL_H
#define COMPOSITEBILL_H

#include "Bill.h"
#include <vector>

class CompositeBill: public Bill
{
private:
    std::vector<Bill*> tableBills;
public:
    CompositeBill(/* args */);
    ~CompositeBill();
};

CompositeBill::CompositeBill(/* args */)
{
}

CompositeBill::~CompositeBill()
{
}

#endif