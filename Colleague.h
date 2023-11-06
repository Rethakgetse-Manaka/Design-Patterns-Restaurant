#ifndef Colleague_H
#define Colleague_H
#include "OrderMediator.h"
// class OrderMediator;
class Colleague
/**
 * @brief The Colleague class is an abstract base class that defines the interface for objects that
 *        communicate with each other through a mediator.
 * 
 * @details The Colleague class has a pointer to an OrderMediator object, which is used to communicate
 *          with other Colleague objects. It provides methods to set and get the mediator object.
 *          This class is meant to be subclassed to create concrete Colleague objects that can communicate
 *          with each other through the mediator.
 * 
 * @see OrderMediator
 */
{
    protected:
        OrderMediator* mediator;

    public:
        void setMediator(OrderMediator* mediator);
        OrderMediator* getMediator();
        virtual ~Colleague();
};
#endif