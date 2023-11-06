#ifndef OrderMediator_H
#define OrderMediator_H
#include "Table.h"
#include "Inventory.h"
class Plate;
class DrinkTray;
class OrderMediator
/**
 * @brief The OrderMediator class is an abstract class that defines the interface for a mediator between the Waiter, Chef, and Inventory classes.
 * 
 * It provides methods for notifying the mediator when an order is placed, when a plate is ready, and when drinks are ready. It also provides methods for adding a waiter and setting the inventory.
 * 
 * @note This class is meant to be inherited from and its methods implemented.
 */
{
    public:
        /**
         * @brief Notifies the mediator that an order has been placed.
         * 
         * @param o A pointer to the Order object that was placed.
         */
        virtual void notifyOrderPlaced(Order* o) = 0;

        /**
         * @brief Notifies the mediator that a plate is ready.
         * 
         * @param p A pointer to the Plate object that is ready.
         */
        virtual void notifyPlateReady(Plate* p) = 0;

        /**
         * @brief Notifies the mediator that drinks are ready.
         * 
         * @param d A pointer to the DrinkTray object that is ready.
         */
        virtual void notifyDrinksReady(DrinkTray* d) = 0;

        /**
         * @brief Adds a waiter to the mediator.
         * 
         * @param Waiter A pointer to the Waiter object to be added.
         */
        virtual void addWaiter(Waiter* Waiter) = 0;

        /**
         * @brief Sets the inventory for the mediator.
         * 
         * @param i A pointer to the Inventory object to be set.
         */
        virtual void setInventory(Inventory* i) = 0;

        /**
         * @brief Virtual destructor for the OrderMediator class.
         * 
         * @note This destructor is virtual to ensure that the destructor of any derived class is called when deleting an object through a pointer to the base class.
         */
        virtual ~OrderMediator();
};
#endif