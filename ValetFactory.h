#ifndef VALETFACTORY_H
#define VALETFACTORY_H

#include "Customer.h"

class ValetService;

class ValetFactory {
public:
    virtual ValetService* createValet(Customer* customer, int vID) = 0;
    virtual ~ValetFactory() {}
};


#endif
