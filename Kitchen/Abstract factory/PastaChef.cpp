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
void PastaChef::setPlate(Plate* plate){
    this->plate = plate;
}