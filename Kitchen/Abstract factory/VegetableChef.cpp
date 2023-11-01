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
void VegetableChef::setPlate(Plate* plate){
    this->plate = plate;
}