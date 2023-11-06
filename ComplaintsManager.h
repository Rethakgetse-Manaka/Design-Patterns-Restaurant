#ifndef COMPLAINTMANAGER_H
#define COMPLAINTMANAGER_H

#include "TableVisitor.h"
#include "Customer.h"

/**
 * @brief The ComplaintsManager class is a concrete implementation of the TableVisitor interface.
 * 
 */
class ComplaintsManager: public TableVisitor
{
private:
    /* data */
public:
    /**
     * @brief Construct a new Complaints Manager object
     * 
     */
    ComplaintsManager(/* args */);

    /**
     * @brief Visit the given customer and handle any complaints they may have.
     * 
     * @param customer The customer to visit.
     */
    void visitCustomer(Customer* customer);

    /**
     * @brief Destroy the Complaints Manager object
     * 
     */
    virtual ~ComplaintsManager();
};

#endif