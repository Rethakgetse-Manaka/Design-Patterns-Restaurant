#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "CustomerState.h"
#include "Customer.h"
#include "Happy.h"
#include "UnHappy.h"

/**
 * @brief The Neutral class is a concrete class that inherits from the CustomerState abstract class.
 * 
 */
class Neutral: public CustomerState
{
private:

public:
    /**
     * @brief Construct a new Neutral object
     * 
     */
    Neutral();

    /**
     * @brief Handles the customer's request while in the Neutral state.
     * 
     * @param c A pointer to the customer object.
     */
    void handle(Customer* c);

    /**
     * @brief Displays the customer's happiness level while in the Neutral state.
     * 
     * @param c A pointer to the customer object.
     */
    void showHapiness(Customer* c);

    /**
     * @brief Displays the customer's unhappiness level while in the Neutral state.
     * 
     * @param c A pointer to the customer object.
     */
    void showUnhapiness(Customer* c);

    /**
     * @brief Destroy the Neutral object
     * 
     */
    virtual ~Neutral();
};

#endif