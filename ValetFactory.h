#ifndef VALETFACTORY_H
#define VALETFACTORY_H

#include "Customer.h"

class ValetService;

/**
 * @brief Abstract factory class for creating ValetService objects.
 * 
 */
class ValetFactory {
public:
    /**
     * @brief Creates a new ValetService object.
     * 
     * @param customer Pointer to the Customer object.
     * @param vID The ID of the ValetService object.
     * @return ValetService* Pointer to the newly created ValetService object.
     */
    virtual ValetService* createValet(Customer* customer, int vID) = 0;
    virtual ~ValetFactory() {}
};


#endif
