#ifndef CUSTOMERHANDLER_H
#define CUSTOMERHANDLER_H

#include <iostream>
#include <unistd.h>
#include "Customer.h"
class CustomerHandler
{
protected:
    CustomerHandler* next;
public:
    CustomerHandler();
    void add(CustomerHandler* n);
    virtual ~CustomerHandler();
    virtual void handleRequest(Customer* customer);
};


#endif