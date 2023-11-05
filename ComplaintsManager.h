#ifndef COMPLAINTMANAGER_H
#define COMPLAINTMANAGER_H

#include "TableVisitor.h"
#include "Customer.h"

/**
 * @brief The ComplaintsManager class is responsible for visiting customers and handling their complaints.
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
     * @brief Visit a customer and handle their complaint.
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