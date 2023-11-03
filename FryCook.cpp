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

void FryCook::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Wings")
    {
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Fried Meal")
    {
        this->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}


