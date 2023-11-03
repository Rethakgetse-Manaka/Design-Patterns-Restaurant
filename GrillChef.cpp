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

void GrillChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Beef Kebab")
    {
        this->addMeal(createStarter());// change to this->addMeal
    }
    else if(foodItem->getMealName() == "Beef Burger")
    {
        this->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}

