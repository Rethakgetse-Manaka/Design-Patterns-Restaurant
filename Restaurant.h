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

/**
 * @brief The Restaurant class represents a restaurant that manages tables, valets, managers, waiters, and an accounting system.
 */
class Restaurant
{
private:
    AccountingSystem* accountingSystem;
    std::vector<Table*> tables;
    std::vector<Valet*> valets;
    std::vector<TableVisitor*> managers;
    std::vector<Waiter*> waiters;
public:
    /**
     * @brief Constructs a new Restaurant object.
     */
    Restaurant();

    /**
     * @brief Sets the accounting system for the restaurant.
     * 
     * @param as The accounting system to set.
     */
    void setAccountingSystem(AccountingSystem* as);

    /**
     * @brief Displays basic accounting information for the restaurant.
     */
    void displayBasicAccouting();

    /**
     * @brief Adds a valet to the restaurant.
     * 
     * @param valet The valet to add.
     */
    void addValet(Valet* valet);

    /**
     * @brief Adds a table to the restaurant.
     * 
     * @param table The table to add.
     */
    void addTable(Table* table);

    /**
     * @brief Adds a manager to the restaurant.
     * 
     * @param manager The manager to add.
     */
    void addManager(TableVisitor* manager);

    /**
     * @brief Handles initial customer interaction with the restaurant.
     * 
     * @param customer The customer to handle.
     */
    void initialCustomerHandling(Customer* customer);

    /**
     * @brief Adds a waiter to the restaurant.
     * 
     * @param waiter The waiter to add.
     */
    void addWaiter(Waiter* waiter);

    /**
     * @brief Requests a bill for a table.
     * 
     * @param table The table to request the bill for.
     */
    void requestBill(Table* table);

    /**
     * @brief Visits a table with a table visitor.
     * 
     * @param tableVisitor The table visitor to visit the table with.
     */
    void visitTable(TableVisitor *tableVisitor);

    /**
     * @brief Pays a tab for a customer.
     * 
     * @param customer The customer to pay the tab for.
     * @param tabCaretaker The tab caretaker to use to pay the tab.
     */
    void payTab(Customer* customer,TabCaretaker* tabCaretaker);

    /**
     * @brief Destroys the Restaurant object.
     */
    ~Restaurant();
};

#endif