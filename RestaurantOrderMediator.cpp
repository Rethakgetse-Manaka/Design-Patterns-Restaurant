#include "RestaurantOrderMediator.h"
#include "Waiter.h"
#include "Plate.h"
#include "GrillChef.h"
#include "PastaChef.h"
#include "FryCook.h"
#include "VegetableChef.h"
#include "RotisseurChef.h"

RestaurantOrderMediator::RestaurantOrderMediator()
{
    chefs = {new VegetableChef,new FryCook,new PastaChef,new RotisseurChef,new GrillChef};
    for(size_t i = 0; i < chefs.size();i++)
    {
        chefs[i]->setMediator(this);
    }
}
void RestaurantOrderMediator::notifyOrderPlaced(Order* o)
{
    if(o != nullptr)
    {
        Plate* t = new Plate();
        t->setCustomerID(o->getCustomerID());
        t->setTableNumber(o->getTableNumber());

        Chef::setPlate(t);
        std::cout << "Order handler received the order from the waiter and is passing it to an available chef.."<<std::endl;

        


        //Need to handle passing the order  to chefs
        for(size_t i = 0; i < o->getFoodItems().size();i++)
        {
            std::string meal = o->getFoodItems()[i]->getMealName();
            int q = inventory->removeStock(meal);
            if(q == 0)
            {
                std::cout << meal << "has just finished please order more" << std::endl;
            }
            std::cout << meal << std::endl;
            if(meal == "Beef Kebab" || meal == "Beef Burger")
            {
                chefs[4]->receiveOrder(o->getFoodItems()[i],o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());

            }
            else if(meal == "Green Salad" || meal == "Stir Fry")
            {
                chefs[0]->receiveOrder(o->getFoodItems()[i],o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());


            }
            else if(meal == "Ramen" || meal == "Alfredo")
            {
                chefs[2]->receiveOrder(o->getFoodItems()[i],o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());
            }
            else if(meal == "Chicken Salad" || meal == "Chicken Burger")
            {
                chefs[3]->receiveOrder(o->getFoodItems()[i],o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());
            }
            else if(meal == "Wings" || meal == "Fried Meal")
            {
                chefs[1]->receiveOrder(o->getFoodItems()[i],o->getTableNumber(),o->getCustomerID(),o->getFoodItems().size());
            }
            
        }

    }
    

    
    
}

void RestaurantOrderMediator::setInventory(Inventory *inventory)
{
    this->inventory = inventory;
}

void RestaurantOrderMediator::notifyPlateReady(Plate* p)
{
    if(p != nullptr)
    {
        for(Waiter* w : waiters)
        {
            
            if(w != nullptr && w->managesTable(p->getTableNumber()))
            {
                w->presentFoodToTable(p);
                break;

            }
            
        }

    }
    



}

void RestaurantOrderMediator::addWaiter(Waiter *Waiter)
{
    if(Waiter != nullptr)
    {
        waiters.push_back(Waiter);
    }
}
