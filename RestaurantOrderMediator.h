#ifndef RestaurantOrderMediator_H
#define RestaurantOrderMediator_H
#include "OrderMediator.h"
#include "Chef.h"
#include "DrinkTray.h"
#include "Bartender.h"
#include <iostream>

class RestaurantOrderMediator: public OrderMediator
/**
 * @brief The RestaurantOrderMediator class acts as a mediator between the waiters, chefs, bartender, and inventory.
 * 
 */
{
    private:
        std::vector<Waiter*> waiters; /**< A vector of Waiter pointers. */
        std::vector<Chef*> chefs; /**< A vector of Chef pointers. */
        Bartender* bartender; /**< A pointer to a Bartender object. */
        std::string name; /**< A string representing the name of the restaurant. */
        Inventory* inventory; /**< A pointer to an Inventory object. */
    public:
        /**
         * @brief Construct a new RestaurantOrderMediator object
         * 
         */
        RestaurantOrderMediator();
        
        /**
         * @brief Destroy the RestaurantOrderMediator object
         * 
         */
        ~RestaurantOrderMediator();
        
        /**
         * @brief Notifies the mediator that an order has been placed.
         * 
         * @param o A pointer to an Order object.
         */
        virtual void notifyOrderPlaced(Order* o);
        
        /**
         * @brief Sets the inventory for the mediator.
         * 
         * @param inventory A pointer to an Inventory object.
         */
        void setInventory(Inventory* inventory);
        
        /**
         * @brief Notifies the mediator that a plate is ready.
         * 
         * @param p A pointer to a Plate object.
         */
        virtual void notifyPlateReady(Plate* p);
        
        /**
         * @brief Notifies the mediator that drinks are ready.
         * 
         * @param d A pointer to a DrinkTray object.
         */
        virtual void notifyDrinksReady(DrinkTray* d);
        
        /**
         * @brief Adds a waiter to the mediator.
         * 
         * @param Waiter A pointer to a Waiter object.
         */
        void addWaiter(Waiter* Waiter);
};


#endif