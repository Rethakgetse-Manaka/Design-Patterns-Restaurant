#include "CustomerHandler.h"

using namespace std;

CustomerHandler::CustomerHandler()
{
}

void CustomerHandler::add(CustomerHandler *n)
{
    if (next != nullptr) 
    {
        next->add(n);
    }
    else
    {
        next = n;
    }
    
}

CustomerHandler::~CustomerHandler()
{
}

void CustomerHandler::handleRequest()
{
}