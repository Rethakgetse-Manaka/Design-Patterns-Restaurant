#ifndef TABLEVISITOR_H
#define TABLEVISITOR_H

//#include "Customer.h"
class Customer;
#include <iostream>

/**
 * @brief The TableVisitor class is an abstract class that defines the interface for visiting customers in a table.
 * 
 */
class TableVisitor
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
     * @param customer The customer object to visit
     */
    virtual void visitCustomer(Customer* customer) =0;

    /**
     * @brief Destroy the Table Visitor object
     * 
     */
    virtual ~TableVisitor();
};

#endif