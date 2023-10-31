#include "RotisseurChef.h"

Meal* RotisseurChef::createStarter()
{
    return new ChickenSalad;
}

Meal* RotisseurChef::createMain()
{
    return new ChickenBurger;
}