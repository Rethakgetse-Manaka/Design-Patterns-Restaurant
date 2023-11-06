#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H  

#include "TableVisitor.h"
#include "Customer.h"
#include "AccountingSystem.h"
#include "Transaction.h"
#include "Inventory.h"
#include <random>

/**
 * @brief The AdminManager class is responsible for managing the system as an administrator.
 * 
 * This class inherits from the TableVisitor class and implements its visitCustomer method.
 * It also has access to the Customer, AccountingSystem, Transaction, and Inventory classes.
 */
class AdminManager: public TableVisitor
{
private:
public:
    /**
     * @brief Construct a new Admin Manager object
     * 
     */
    AdminManager();

    /**
     * @brief Visit the given customer object.
     * 
     * @param customer The customer object to visit.
     */
    void visitCustomer(Customer* customer);

    /**
     * @brief Destroy the Admin Manager object
     * 
     */
    virtual ~AdminManager();
};

#endif