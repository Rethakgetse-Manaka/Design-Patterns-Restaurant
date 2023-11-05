#ifndef VALET_H
#define VALET_H

#include "ValetService.h"
#include "Customer.h"

/**
 * @brief The Valet class represents a valet who provides valet service to a customer.
 * 
 */
class Valet : public ValetService {
public:
    /**
     * @brief Construct a new Valet object with the given valet ID and customer.
     * 
     * @param valetId The ID of the valet.
     * @param customer The customer who the valet is providing service to.
     */
    Valet(int valetId, Customer* customer);
    
    /**
     * @brief Park the vehicle of the given customer with the given ID.
     * 
     * @param customer The customer whose vehicle is being parked.
     * @param id The ID of the vehicle being parked.
     */
    void parkVehicle(Customer* customer, int id) override ;
    
    /**
     * @brief Get the ID of the valet.
     * 
     * @return int The ID of the valet.
     */
    int getValetId();
    
    /**
     * @brief Return the vehicle of the given customer with the given ID.
     * 
     * @param customer The customer whose vehicle is being returned.
     * @param id The ID of the vehicle being returned.
     */
    void returnVehicle(Customer* customer, int id) override ;

private:
    Customer* customer; /**< The customer who the valet is providing service to. */
    int valetId; /**< The ID of the valet. */
    //int getValetId();
};

#endif
