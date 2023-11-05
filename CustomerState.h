#ifndef CUSTOMERSTATE_H
#define CUSTOMERSTATE_H

#include <string>
#include <iostream>
#include <sstream>
class Customer;

/**
 * @brief The abstract base class for all customer states.
 * 
 */
class CustomerState
{
protected:
    std::string state;
public:
    /**
     * @brief Construct a new Customer State object
     * 
     */
    CustomerState();
    /**
     * @brief Destroy the Customer State object
     * 
     */
    virtual ~CustomerState();
    /**
     * @brief Handle the customer's request.
     * 
     * @param c The customer object.
     */
    virtual void handle(Customer* c) = 0;
    /**
     * @brief Show the customer's happiness.
     * 
     * @param c The customer object.
     */
    virtual void showHapiness(Customer* c) = 0;
    /**
     * @brief Show the customer's unhappiness.
     * 
     * @param c The customer object.
     */
    virtual void showUnhapiness(Customer* c) = 0;
};

#endif