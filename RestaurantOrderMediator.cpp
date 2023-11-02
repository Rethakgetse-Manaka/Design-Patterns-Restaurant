#include "RestaurantOrderMediator.h"
#include "Waiter.h"
#include "Plate.h"

RestaurantOrderMediator::RestaurantOrderMediator()
{
    chefs = {new VegetableChef,new FryCook,new PastaChef,new RotisseurChef,new GrillChef}
}
void RestaurantOrderMediator::notifyOrderPlaced(Order* o)
{
    std::cout << "Order handler received the order from the waiter and is passing it to an available chef.."<<std::endl;

    //Need to handle passing the order  to chefs
    for(int i = 0; i < o->getFoodItems().size();i++)
    {
        std::string meal = o->getFoodItems()[i]->getMealName();
        if(meal == "Beef Kebab" || meal == "Beef Burger")
        {
            chefs[4]->receiveOrder(meal,o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());

        }
        else if(meal == "Green Salad" || meal == "Stir Fry")
        {
            chefs[0]->receiveOrder(meal,o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());


        }
        else if(meal == "Ramen" || meal == "Alfredo")
        {
            chefs[2]->receiveOrder(meal,o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());
        }
        else if(meal == "Chicken Salad" || meal == "Chicken Burger")
        {
            chefs[3]->receiveOrder(meal,o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());
        }
        else if(meal == "Wings" || meal == "Fried Meal")
        {
            chefs[1]->receiveOrder(meal,o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());
        }
        
    }

    
    
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

