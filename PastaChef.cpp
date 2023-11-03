#include "PastaChef.h"

Meal* PastaChef::createStarter()
{
    return new Ramen;
}

Meal* PastaChef::createMain()
{
    return new Alfredo;
}

void PastaChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}


void PastaChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Ramen")
    {
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Alfredo")
    {
        this->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}

