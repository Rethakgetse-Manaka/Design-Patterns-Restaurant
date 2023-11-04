#ifndef Colleague_H
#define Colleague_H
#include "OrderMediator.h"
// class OrderMediator;
class Colleague
{
    protected:
        OrderMediator* mediator;

    public:
        void setMediator(OrderMediator* mediator);
        OrderMediator* getMediator();
};
#endif