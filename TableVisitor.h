#ifndef TABLEVISITOR_H
#define TABLEVISITOR_H

//#include "Customer.h"
class Customer;
#include <iostream>

class TableVisitor
/**
 * @brief The TableVisitor class is an abstract class that defines the interface for visiting customers in a restaurant.
 * 
 */
{
private:
    /* data */
public:
    /**
     * @brief Construct a new Table Visitor object
     * 
     */
    TableVisitor();

    /**
     * @brief Visit a customer object
     * 
     * @param customer The customer to visit
     */
    virtual void visitCustomer(Customer* customer) =0;

    /**
     * @brief Destroy the Table Visitor object
     * 
     */
    virtual ~TableVisitor();
};

#endif