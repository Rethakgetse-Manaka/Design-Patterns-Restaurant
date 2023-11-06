#ifndef VALETSERVICE_H
#define VALETSERVICE_H
#include <unistd.h>
#include "Customer.h"

/**
 * @brief The ValetService class is an abstract class that defines the interface for a valet service.
 * 
 */
class ValetService {
public:
    /**
     * @brief Parks the vehicle of the given customer with the given ID.
     * 
     * @param customer Pointer to the customer object.
     * @param id The ID of the vehicle to be parked.
     */
    virtual void parkVehicle(Customer* customer, int id) = 0;

    /**
     * @brief Returns the vehicle of the given customer with the given ID.
     * 
     * @param customer Pointer to the customer object.
     * @param id The ID of the vehicle to be returned.
     */
    virtual void returnVehicle(Customer* customer, int id) = 0;

    /**
     * @brief Virtual destructor for the ValetService class.
     * 
     */
    virtual ~ValetService() {}
};

#endif
