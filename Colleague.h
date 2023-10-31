#ifndef Colleague_H
#define Colleague_H
#include "OrderMediator.h"
class Colleague
{
    private:
        OrderMediator* mediator;
    public:
        virtual void receiveOrder(Order* o) = 0;
        virtual void sendOrder(Order* o) = 0;

};
#endif