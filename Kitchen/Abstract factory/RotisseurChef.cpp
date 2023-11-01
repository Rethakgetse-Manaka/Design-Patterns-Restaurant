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
    this->plate->addMeal(meal);
}
void RotisseurChef::setPlate(Plate* plate){
    this->plate = plate;
}