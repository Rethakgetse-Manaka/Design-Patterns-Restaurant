#include "Waiter.h"

void Waiter::receiveOrder(Order* o)
{
    mediator->notifyOrderPlaced(o);
}

std::string Waiter::getName()
{
    return name;
}

void Waiter::presentBill(Table* t)
{
    
}