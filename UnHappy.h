#ifndef UNHAPPY_H
#define UNHAPPY_H

#include "CustomerState.h"
#include "Customer.h"
#include "Neutral.h"
/**
 * @brief The UnHappy class represents the state of a Customer who is unhappy.
 * 
 */
class UnHappy: public CustomerState
{
private:

public:
    /**
     * @brief Construct a new UnHappy object
     * 
     */
    UnHappy();

    /**
     * @brief Handles the behavior of an unhappy Customer.
     * 
     * @param c Pointer to the Customer object.
     */
    void handle(Customer* c);

    /**
     * @brief Displays the happiness level of an unhappy Customer.
     * 
     * @param c Pointer to the Customer object.
     */
    void showHapiness(Customer* c);

    /**
     * @brief Displays the unhappiness level of an unhappy Customer.
     * 
     * @param c Pointer to the Customer object.
     */
    void showUnhapiness(Customer* c);

    /**
     * @brief Destroy the UnHappy object
     * 
     */
    virtual ~UnHappy();
};

#endif