#ifndef RestaurantOrderMediator_H
#define RestaurantOrderMediator_H
#include "OrderMediator.h"
#include "Chef.h"
#include "DrinkTray.h"
#include "Bartender.h"
#include <iostream>

class RestaurantOrderMediator: public OrderMediator
{
    private:
        std::vector<Waiter*> waiters;
        std::vector<Chef*> chefs;
        Bartender* bartender;
        std::string name;


    public:
        RestaurantOrderMediator();
        virtual void notifyOrderPlaced(Order* o);
        virtual void notifyPlateReady(Plate* p);
        virtual void notifyDrinksReady(DrinkTray* d);
        void addWaiter(Waiter* Waiter);
};

#endif