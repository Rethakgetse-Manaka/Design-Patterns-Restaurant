#ifndef RestaurantOrderMediator_H
#define RestaurantOrderMediator_H
#include "OrderMediator.h"
#include "Chef.h"
#include "RestaurantOrderMediator.h"

class RestaurantOrderMediator: public OrderMediator
{
    private:
        std::vector<Waiter*> waiters;
        std::vector<Chef*> chefs;
        std::string name;
        Inventory* inventory;
    public:
        RestaurantOrderMediator();
        
        virtual void notifyOrderPlaced(Order* o);
        void setInventory(Inventory* inventory);
        virtual void notifyPlateReady(Plate* p);
        void addWaiter(Waiter* Waiter);
};

#endif