#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H  

#include "TableVisitor.h"
#include "Customer.h"
#include "AccountingSystem.h"
#include "Transaction.h"
#include "Inventory.h"
#include <random>
class AdminManager: public TableVisitor
{
private:
public:
    AdminManager();
    void visitCustomer(Customer* customer);
    virtual ~AdminManager();
};

#endif