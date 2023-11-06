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
 * @brief The Restaurant class represents a restaurant that has tables, valets, managers, waiters, and an accounting system.
 * 
 */
class Restaurant
{
private:
    AccountingSystem* accountingSystem; /**< A pointer to the accounting system of the restaurant. */
    std::vector<Table*> tables; /**< A vector of pointers to the tables in the restaurant. */
    std::vector<Valet*> valets; /**< A vector of pointers to the valets in the restaurant. */
    std::vector<TableVisitor*> managers; /**< A vector of pointers to the managers in the restaurant. */
    std::vector<Waiter*> waiters; /**< A vector of pointers to the waiters in the restaurant. */
public:
    /**
     * @brief Construct a new Restaurant object.
     * 
     */
    Restaurant();

    /**
     * @brief Set the Accounting System object of the restaurant.
     * 
     * @param as A pointer to the accounting system object.
     */
    void setAccountingSystem(AccountingSystem* as);

    /**
     * @brief Get the Accounting System object of the restaurant.
     * 
     * @return AccountingSystem* A pointer to the accounting system object.
     */
    AccountingSystem* getAccountingSystem();

    /**
     * @brief Display the basic accounting information of the restaurant.
     * 
     */
    void displayBasicAccouting();

    /**
     * @brief Add a valet to the restaurant.
     * 
     * @param valet A pointer to the valet object.
     */
    void addValet(Valet* valet);

    /**
     * @brief Add a table to the restaurant.
     * 
     * @param table A pointer to the table object.
     */
    void addTable(Table* table);

    /**
     * @brief Add a manager to the restaurant.
     * 
     * @param manager A pointer to the manager object.
     */
    void addManager(TableVisitor* manager);

    /**
     * @brief Handle the initial customer request.
     * 
     * @param customer A pointer to the customer object.
     */
    void initialCustomerHandling(Customer* customer);

    /**
     * @brief Add a waiter to the restaurant.
     * 
     * @param waiter A pointer to the waiter object.
     */
    void addWaiter(Waiter* waiter);

    /**
     * @brief Request a bill for a table.
     * 
     * @param table A pointer to the table object.
     */
    void requestBill(Table* table);

    /**
     * @brief Visit a table.
     * 
     */
    void visitTable();

    /**
     * @brief Pay the tab for a customer.
     * 
     * @param customer A pointer to the customer object.
     * @param tabCaretaker A pointer to the tab caretaker object.
     */
    void payTab(Customer* customer,TabCaretaker* tabCaretaker);

    /**
     * @brief Destroy the Restaurant object.
     * 
     */
    ~Restaurant();
};

#endif