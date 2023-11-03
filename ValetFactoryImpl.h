#ifndef VALETFACTORYIMPL_H
#define VALETFACTORYIMPL_H

#include "ValetFactory.h"
#include "Valet.h"

class ValetFactoryImpl : public ValetFactory
{
public:
    ValetService *createValet(Customer *customer, int vID) override;
};

#endif
