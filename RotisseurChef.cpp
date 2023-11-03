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


void RotisseurChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Chicken Salad")
    {
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Chicken Burger")
    {
        this->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}
