#ifndef TABLES_H
#define TABLES_H

#include "Bill.h"
#include "Customer.h"
#include <vector>

class Tables
{
private:
    Bill *bill;
    //TableState *state;
    std::vector<Customer *> customers;
public:
    Tables();
    ~Tables();
    void requestBill();
    void requestWaiter();
    void requestToOrder();
    void receiveFood();
    //void setState(TableState* s);
    void addCustomer(Customer *customer); 
    void removeCustomer(Customer *customer);
};



#endif