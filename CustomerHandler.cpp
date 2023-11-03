#include "CustomerHandler.h"

using namespace std;

CustomerHandler::CustomerHandler()
{
    next = nullptr;
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
    if (next != nullptr) 
    {
        delete next;
    }
}

void CustomerHandler::handleRequest(Customer* customer)
{
    if(next != nullptr){
        next->handleRequest(customer);
    }else{
        cout<<"No handler available to handle your request." << endl;
    }
}