#ifndef OrderMediator_H
#define OrderMediator_H
#include "Table.h"
#include "Inventory.h"
class Plate;
class DrinkTray;
/**
 * @brief The OrderMediator class is an abstract class that defines the interface for a mediator between the Waiter, Chef, and Inventory classes.
 * 
 */
class OrderMediator
{
    public:
        virtual void notifyOrderPlaced(Order* o) = 0;
        virtual void notifyPlateReady(Plate* p) = 0;
        virtual void notifyDrinksReady(DrinkTray* d) = 0;
        virtual void addWaiter(Waiter* Waiter) = 0;
        virtual void setInventory(Inventory* i) = 0;

};
#endif