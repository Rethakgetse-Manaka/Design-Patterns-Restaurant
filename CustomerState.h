#ifndef CUSTOMERSTATE_H
#define CUSTOMERSTATE_H

#include <string>
#include <iostream>
#include <sstream>
class Customer;

class CustomerState
/**
 * @brief The base class for all customer states.
 * 
 * This class defines the interface for all customer states. It contains pure virtual functions
 * that must be implemented by derived classes. It also has a protected member variable 'state'
 * which stores the current state of the customer.
 */
{
protected:
    std::string state;
public:
    CustomerState();
    virtual ~CustomerState();
    virtual void handle(Customer* c) = 0;
    virtual void showHapiness(Customer* c) = 0;
    virtual void showUnhapiness(Customer* c) = 0;
};

#endif