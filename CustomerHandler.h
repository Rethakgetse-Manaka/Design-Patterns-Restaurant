#ifndef CUSTOMERHANDLER_H
#define CUSTOMERHANDLER_H

#include <iostream>
#include <unistd.h>
#include "Customer.h"
/**
 * @brief The base class for handling customer requests.
 * 
 */
class CustomerHandler
{
protected:
    CustomerHandler* next;
public:
    /**
     * @brief Construct a new CustomerHandler object.
     * 
     */
    CustomerHandler();
    /**
     * @brief Add a new CustomerHandler object to the chain.
     * 
     * @param n The CustomerHandler object to add.
     */
    void add(CustomerHandler* n);
    /**
     * @brief Destroy the CustomerHandler object.
     * 
     */
    virtual ~CustomerHandler();
    /**
     * @brief Handle the customer request.
     * 
     * @param customer The customer making the request.
     */
    virtual void handleRequest(Customer* customer);
};


#endif