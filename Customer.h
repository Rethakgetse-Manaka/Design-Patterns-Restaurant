#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "CustomerState.h"
#include "Order.h"
#include <string>
class Customer
{
private:
    int customerID;    
    std::string customerName;
    CustomerState *state;
    Order* order;
public:
    Customer();
    ~Customer();
    CustomerState *getState();
    void setState(CustomerState *s);
};

#endif