#include "VegetableChef.h"

Meal* VegetableChef::createStarter()
{
    return new GreenSalad;
}

Meal* VegetableChef::createMain()
{
    return new StirFry;
}

void VegetableChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}

void VegetableChef::receiveOrder(std::string meal, int tableNumber, int custID, int numOfItems)
{
    if(meal == "Green Salad")
    {
        plate->addMeal(createStarter());
    }
    else if(meal == "Stir Fry")
    {
        plate->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}
