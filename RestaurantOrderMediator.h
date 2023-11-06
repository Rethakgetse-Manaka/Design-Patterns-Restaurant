#ifndef RestaurantOrderMediator_H
#define RestaurantOrderMediator_H
#include "OrderMediator.h"
#include "Chef.h"
#include "DrinkTray.h"
#include "Bartender.h"
#include <iostream>

/**
 * @brief A mediator class that coordinates communication between waiters, chefs, and bartender to fulfill orders in a restaurant.
 */
class RestaurantOrderMediator: public OrderMediator
{
    private:
        std::vector<Waiter*> waiters;
        std::vector<Chef*> chefs;
        Bartender* bartender;
        std::string name;
        Inventory* inventory;
    public:
        /**
         * @brief Constructs a new RestaurantOrderMediator object.
         */
        RestaurantOrderMediator();
        
        /**
         * @brief Notifies the mediator that an order has been placed.
         * 
         * @param o The order that has been placed.
         */
        virtual void notifyOrderPlaced(Order* o);
        
        /**
         * @brief Sets the inventory for the restaurant.
         * 
         * @param inventory The inventory to be set.
         */
        void setInventory(Inventory* inventory);
        
        /**
         * @brief Notifies the mediator that a plate is ready.
         * 
         * @param p The plate that is ready.
         */
        virtual void notifyPlateReady(Plate* p);
        
        /**
         * @brief Notifies the mediator that drinks are ready.
         * 
         * @param d The drink tray that is ready.
         */
        virtual void notifyDrinksReady(DrinkTray* d);
        
        /**
         * @brief Adds a waiter to the restaurant.
         * 
         * @param Waiter The waiter to be added.
         */
        void addWaiter(Waiter* Waiter);
        
        /**
         * @brief Destroys the RestaurantOrderMediator object.
         */
        virtual ~RestaurantOrderMediator();
};

#endif