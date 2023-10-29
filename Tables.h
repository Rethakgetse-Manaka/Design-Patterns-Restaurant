#ifndef TABLES_H
#define TABLES_H

#include "Bill.h"
#include "Customer.h"
#include <vector>

class Tables
{
private:
    Bill *bill;
    std::vector<Customer *> customers;
public:
    Tables();
    ~Tables();
    void requestBill();
    void addCustomer(Customer *customer); 
    void removeCustomer(Customer *customer);
};

Tables::Tables(/* args */)
{
}

Tables::~Tables()
{
}

#endif