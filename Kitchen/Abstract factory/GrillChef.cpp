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
void GrillChef::setPlate(Plate* plate){
    this->plate = plate;
}