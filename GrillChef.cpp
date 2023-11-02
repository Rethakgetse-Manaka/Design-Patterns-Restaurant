#include "GrillChef.h"

Meal* GrillChef::createStarter()
{
    return new BeefKebab;
}

Meal* GrillChef::createMain()
{
    return new BeefBurger;
}

void GrillChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}

void GrillChef::receiveOrder(std::string meal, int tableNumber, int custID, int numOfItems)
{
    if(meal == "Beef Kebab")
    {
        plate->addMeal(createStarter());
    }
    else if(meal == "Beef Burger")
    {
        plate->addMeal(createStarter());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}

