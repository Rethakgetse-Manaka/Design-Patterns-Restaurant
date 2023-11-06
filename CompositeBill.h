#ifndef COMPOSITEBILL_H
#define COMPOSITEBILL_H

#include "Bill.h"
#include <vector>

/**
 * @brief A composite bill that contains a collection of bills.
 * 
 */
class CompositeBill: public Bill
{
private:
    std::vector<Bill*> tableBills;
public:
    CompositeBill();
    void printBill();
    Bill* findBill(int customer);
    void addPerson(Bill* Bill);
    void removePerson(int customer);
    double getBillTotal();
    Order* getOrder();
    virtual ~CompositeBill();
};

#endif