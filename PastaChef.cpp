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


void PastaChef::receiveOrder(std::string meal, int tableNumber, int custID, int numOfItems)
{
    if(meal == "Ramen")
    {
        plate->addMeal(createStarter());
    }
    else if(meal == "Alfredo")
    {
        plate->addMeal(createMain());
    }
    if(plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}

