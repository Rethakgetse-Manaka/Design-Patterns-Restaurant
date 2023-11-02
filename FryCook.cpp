#include "FryCook.h"

FryCook::FryCook(){}

Meal* FryCook::createStarter()
{
    return new Wings;
}

Meal* FryCook::createMain()
{
    return new FriedMeal;
}

void FryCook::addMeal(Meal* meal){
    plate->addMeal(meal);
}

void FryCook::receiveOrder(std::string meal, int tableNumber, int custID, int numOfItems)
{
    if(meal == "Wings")
    {
        plate->addMeal(createStarter());
    }
    else if(meal == "Fried Meal")
    {
        plate->addMeal(createStarter());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}


