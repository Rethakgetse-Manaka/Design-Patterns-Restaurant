#include "ValetFactoryImpl.h"

ValetService *ValetFactoryImpl::createValet(Customer *customer, int vID) 
{
    return new Valet(vID, customer);
}
