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
void FryCook::setPlate(Plate* plate){
    this->plate = plate;
}