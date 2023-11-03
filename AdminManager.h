#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H  

#include "TableVisitor.h"
#include "Customer.h"
#include <random>
class AdminManager: public TableVisitor
{
private:
    /* data */
public:
    AdminManager(/* args */);
    void visitCustomer(Customer* customer);
    virtual ~AdminManager();
};

#endif