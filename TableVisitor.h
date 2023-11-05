#ifndef TABLEVISITOR_H
#define TABLEVISITOR_H

//#include "Customer.h"
class Customer;
#include <iostream>

class TableVisitor
{
private:
    /* data */
public:
    TableVisitor();
    virtual void visitCustomer(Customer* customer) =0;
    virtual ~TableVisitor();
};

#endif