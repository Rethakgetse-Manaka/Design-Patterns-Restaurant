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
 * It inherits from the TableVisitor class and implements the visitCustomer method.
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
     * @brief Visit the Customer object and perform necessary actions.
     * 
     * @param customer The Customer object to visit.
     */
    void visitCustomer(Customer* customer);

    /**
     * @brief Destroy the Admin Manager object
     * 
     */
    virtual ~AdminManager();
};

#endif