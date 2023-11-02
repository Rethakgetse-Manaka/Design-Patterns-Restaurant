#ifndef CUSTOMERHANDLER_H
#define CUSTOMERHANDLER_H

#include <iostream>

class CustomerHandler
{
private:
    CustomerHandler* next;
public:
    CustomerHandler();
    void add(CustomerHandler* n);
    virtual ~CustomerHandler();
    virtual void handleRequest();
};


#endif