#ifndef CUSTOMERSTATE_H
#define CUSTOMERSTATE_H

#include <string>
#include <iostream>
#include <sstream>
#include "Customer.h"

class CustomerState
{
protected:
    std::string state;
public:
    CustomerState();
    ~CustomerState();
    virtual void handle(Customer* c) = 0;
    virtual void showHapiness(Customer* c) = 0;
    virtual void showUnhapiness(Customer* c) = 0;
};

#endif