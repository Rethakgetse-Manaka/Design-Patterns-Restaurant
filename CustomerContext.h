#ifndef CUSTOMERCONTEXT_H
#define CUSTOMERCONTEXT_H

#include "CustomerState.h"

class CustomerContext
{
private:
    CustomerState *state;
public:
    CustomerContext(/* args */);
    ~CustomerContext();
};

#endif