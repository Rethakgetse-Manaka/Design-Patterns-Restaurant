#include "VegetableChef.h"

Meal* VegetableChef::createStarter()
{
    return new GreenSalad;
}

Meal* VegetableChef::createMain()
{
    return new StirFry;
}