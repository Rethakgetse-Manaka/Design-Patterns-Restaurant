#ifndef COMPLAINTMANAGER_H
#define COMPLAINTMANAGER_H

#include "TableVisitor.h"
#include "Customer.h"
class ComplaintsManager: public TableVisitor
{
private:
    /* data */
public:
    ComplaintsManager(/* args */);
    void visitCustomer(Customer* customer);
    virtual ~ComplaintsManager();
};

#endif