#include "RestaurantOrderMediator.h"
#include "Waiter.h"
#include "Plate.h"

void RestaurantOrderMediator::notifyOrderPlaced(Order* o)
{
    std::cout << "Order handler received the order from the waiter and is passing it to an available chef.."<<std::endl;
    
}

void RestaurantOrderMediator::notifyPlateReady(Plate* p)
{
    for(Waiter* w : waiters)
    {
        if(w->managesTable(p->getTableNumber()))
        {
            w->presentFoodToTable(p);
            break;

        }
        
    }



}

