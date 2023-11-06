
#ifndef VALETFACTORY_H
#define VALETFACTORY_H

#include "Customer.h"

class ValetService;

class ValetFactory {
public:
    /**
     * @brief Creates a new ValetService object for the given customer and valet ID.
     * 
     * @param customer A pointer to the Customer object for which the ValetService is being created.
     * @param vID The ID of the valet who will be providing the ValetService.
     * @return A pointer to the newly created ValetService object.
     */
    virtual ValetService* createValet(Customer* customer, int vID) = 0;

    /**
     * @brief Virtual destructor for the ValetFactory class.
     * 
     */
    virtual ~ValetFactory() {}
};


#endif
