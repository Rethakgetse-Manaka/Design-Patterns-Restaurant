#ifndef CUSTOMERHANDLER_H
#define CUSTOMERHANDLER_H

#include <iostream>
#include "Customer.h"

/**
 * @brief The CustomerHandler class is an abstract class that serves as the base for a chain of responsibility pattern.
 * 
 * It contains a pointer to the next handler in the chain and a method to add a new handler to the chain.
 * It also contains a virtual method to handle customer requests, which will be implemented by the concrete handlers.
 */
class CustomerHandler
{
protected:
    CustomerHandler* next;
public:
    /**
     * @brief Construct a new CustomerHandler object
     * 
     */
    CustomerHandler();

    /**
     * @brief Add a new handler to the chain
     * 
     * @param n Pointer to the new handler to be added
     */
    void add(CustomerHandler* n);

    /**
     * @brief Destroy the CustomerHandler object
     * 
     */
    virtual ~CustomerHandler();

    /**
     * @brief Handle a customer request
     * 
     * @param customer Pointer to the customer making the request
     */
    virtual void handleRequest(Customer* customer);
};

#endif