#ifndef HAPPY_H
#define HAPPY_H

#include "CustomerState.h"
#include "Customer.h"
#include "Neutral.h"
#include "UnHappy.h"
class Happy: public CustomerState
/**
 * @brief The Happy class represents a state of a Customer being happy.
 * 
 */
{
private:

public:
    /**
     * @brief Construct a new Happy object
     * 
     */
    Happy();

    /**
     * @brief Handles the Customer's request while in the Happy state.
     * 
     * @param c Pointer to the Customer object.
     */
    void handle(Customer* c);

    /**
     * @brief Displays the Customer's happiness level.
     * 
     * @param c Pointer to the Customer object.
     */
    void showHapiness(Customer* c);

    /**
     * @brief Displays the Customer's unhappiness level.
     * 
     * @param c Pointer to the Customer object.
     */
    void showUnhapiness(Customer* c);   

    /**
     * @brief Destroy the Happy object
     * 
     */
    virtual ~Happy();
};

#endif