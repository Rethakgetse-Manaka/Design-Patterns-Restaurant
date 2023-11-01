#include "CompositeBill.h"

using namespace std;

CompositeBill::CompositeBill(Order* ord)
{
    this->order = ord;
}

void CompositeBill::printBill()
{
    
}

void CompositeBill::addPerson(Bill *bill)
{
    this->tableBills.push_back(bill);
}

void CompositeBill::removePerson(Bill *bill)
{
}

CompositeBill::~CompositeBill()
{
}