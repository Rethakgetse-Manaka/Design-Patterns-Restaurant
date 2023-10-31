#ifndef RestaurantOrderMediator_H
#define RestaurantOrderMediator_H
#include "OrderMediator.h"
#include "Chef.h"
class RestaurantOrderMediator: public OrderMediator
{
    private:
        std::vector<Chef*> chefs;
        std::string name;

    public:
        virtual void notifyOrderReady(Order* o) = 0;
        virtual void notifyOrder(Order* o) = 0;

};

#endif