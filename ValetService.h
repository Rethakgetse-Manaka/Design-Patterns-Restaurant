#ifndef VALETSERVICE_H
#define VALETSERVICE_H
#include <unistd.h>
#include "Customer.h"

class ValetService {
public:
    virtual void parkVehicle(Customer* customer, int id) = 0;
    virtual void returnVehicle(Customer* customer, int id) = 0;
    virtual ~ValetService() {}
};

#endif
