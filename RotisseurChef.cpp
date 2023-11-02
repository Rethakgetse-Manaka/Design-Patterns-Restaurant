#include "RotisseurChef.h"

Meal* RotisseurChef::createStarter()
{
    return new ChickenSalad;
}

Meal* RotisseurChef::createMain()
{
    return new ChickenBurger;
}

void RotisseurChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}


void RotisseurChef::receiveOrder(std::string meal, int tableNumber, int custID, int numOfItems)
{
    if(meal == "Chicken Salad")
    {
        plate->addMeal(createStarter());
    }
    else if(meal == "Chicken Burger")
    {
        plate->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}
