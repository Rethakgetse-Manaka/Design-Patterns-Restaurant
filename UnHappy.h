#ifndef UNHAPPY_H
#define UNHAPPY_H

#include "CustomerState.h"
#include "Customer.h"
#include "Neutral.h"
class UnHappy: public CustomerState
/**
 * @brief The UnHappy class represents a customer who is unhappy with the service they received.
 * 
 */
{
private:

public:
    /**
     * @brief Construct a new UnHappy object
     * 
     */
    UnHappy();

    /**
     * @brief Handles the unhappy customer by offering a solution to their problem.
     * 
     * @param c Pointer to the customer object.
     */
    void handle(Customer* c);

    /**
     * @brief Displays the level of happiness of the customer.
     * 
     * @param c Pointer to the customer object.
     */
    void showHapiness(Customer* c);

    /**
     * @brief Displays the level of unhappiness of the customer.
     * 
     * @param c Pointer to the customer object.
     */
    void showUnhapiness(Customer* c);

    /**
     * @brief Destroy the UnHappy object
     * 
     */
    virtual ~UnHappy();
};

#endif