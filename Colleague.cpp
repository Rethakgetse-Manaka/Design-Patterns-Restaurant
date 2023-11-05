#include "Colleague.h"

void Colleague::setMediator(OrderMediator *mediator)
{
    this->mediator = mediator;
}

OrderMediator* Colleague::getMediator()
{
    return mediator;
}

Colleague::~Colleague()
{
}
