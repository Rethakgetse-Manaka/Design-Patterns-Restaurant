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

void VegetableChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Green Salad")
    {
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Stir Fry")
    {
        this->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}
