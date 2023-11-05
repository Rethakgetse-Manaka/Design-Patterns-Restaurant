#ifndef Colleague_H
#define Colleague_H
#include "OrderMediator.h"
// class OrderMediator;
class Colleague
/**
 * @brief The Colleague class is an abstract base class that defines the interface for objects that can communicate with each other through a mediator.
 * 
 * It contains a pointer to the mediator object and methods to set and get the mediator.
 */
{
    protected:
        OrderMediator* mediator;

    public:
        /**
         * @brief Sets the mediator object for this Colleague.
         * 
         * @param mediator A pointer to the mediator object.
         */
        void setMediator(OrderMediator* mediator);

        /**
         * @brief Gets the mediator object for this Colleague.
         * 
         * @return A pointer to the mediator object.
         */
        OrderMediator* getMediator();
};
#endif