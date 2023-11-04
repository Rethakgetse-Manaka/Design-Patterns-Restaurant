#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "TableVisitor.h"
#include "Customer.h"
#include "CustomerHandler.h"
#include"ValletHandler.h"
#include "AssignTable.h"
#include "Table.h"
#include "Bill.h"
#include "CompositeBill.h"
#include "Valet.h"
#include "TableVisitor.h"
#include "ComplaintsManager.h"
#include "AdminManager.h"
#include "Waiter.h"
#include "AccountingSystem.h"
#include "Observer.h"
#include "RestaurantObserver.h"
#include <vector>
#include <iostream>

class Restaurant
{
private:
    AccountingSystem* accountingSystem;
    std::vector<Table*> tables;
    std::vector<Valet*> valets;
    std::vector<TableVisitor*> managers;
    std::vector<Waiter*> waiters;
public:
    Restaurant();
    void setAccountingSystem(AccountingSystem* as);
    void displayBasicAccouting();
    void addValet(Valet* valet);
    void addTable(Table* table);
    void addManager(TableVisitor* manager);
    void initialCustomerHandling(Customer *customer);
    void requestBill(Table* table);
    void visitTable(TableVisitor *tableVisitor);
    ~Restaurant();
};

#endif