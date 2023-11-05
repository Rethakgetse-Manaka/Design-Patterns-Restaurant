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
    bartender = new Bartender();
    for(size_t i = 0; i < chefs.size();i++)
    {
        chefs[i]->setMediator(this);
        bartender->setMediator(this);
    }


}
RestaurantOrderMediator::~RestaurantOrderMediator()
{
    for(std::vector<Chef*>::iterator it = chefs.begin();it != chefs.end();++it)
    {
        
        delete *it;
        chefs.erase(it);
    }
    delete bartender;
    bartender = nullptr;

}
void RestaurantOrderMediator::notifyOrderPlaced(Order *o)
{

    if(o != nullptr)
    {
        Plate* t = new Plate();
        t->setTableNumber(o->getTableNumber());
        DrinkTray* d = new DrinkTray();
        d->setTableNumber(o->getTableNumber());
        d->setCustomerID(o->getCustomerID());
        t->setTableNumber(o->getTableNumber());
        t->setCustomerID(o->getCustomerID());
        t->setTableNumber(o->getTableNumber());
        Chef::setPlate(t);
        bartender->setTray(d);
        std::cout << "Order handler received the order from the waiter and is passing it to an available chef.."<<std::endl;

        for (size_t i = 0; i < o->getDrinks().size(); i++) {
            std::string drink = o->getDrinks()[i]->getDescription();
            std::cout << drink << std::endl;
            bartender->receiveOrder(o->getDrinks()[i], o->getTableNumber(),o->getCustomerID(),o->getDrinks().size());
        }
        


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

void RestaurantOrderMediator::notifyDrinksReady(DrinkTray* d)
{
    if(d != nullptr)
    {
        for(Waiter* w : waiters)
        {
            
            if(w != nullptr && w->managesTable(d->getTableNumber()))
            {
                w->presentDrinksToTable(d);
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
