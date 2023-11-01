#ifndef Colleague_H
#define Colleague_H
#include "OrderMediator.h"
class Colleague
{
    protected:
        OrderMediator* mediator;
    public:
        virtual void receiveOrder(Order* o) = 0;


};
#endif