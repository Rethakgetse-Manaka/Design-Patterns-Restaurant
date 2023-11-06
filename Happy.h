#ifndef HAPPY_H
#define HAPPY_H

#include "CustomerState.h"
#include "Customer.h"
#include "Neutral.h"
#include "UnHappy.h"
class Happy: public CustomerState
/**
 * The Happy class represents the state of a happy customer.
 */
{
private:

public:
    /**
     * Constructs a new Happy object.
     */
    Happy();

    /**
     * Handles the customer's request.
     * 
     * @param c A pointer to the customer object.
     */
    void handle(Customer* c);

    /**
     * Shows the happiness of the customer.
     * 
     * @param c A pointer to the customer object.
     */
    void showHapiness(Customer* c);

    /**
     * Shows the unhappiness of the customer.
     * 
     * @param c A pointer to the customer object.
     */
    void showUnhapiness(Customer* c);   

    /**
     * Destroys the Happy object.
     */
    virtual ~Happy();
};

#endif