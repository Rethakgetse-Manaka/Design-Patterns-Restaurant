#include "FryCook.h"

Meal* FryCook::createStarter()
{
    return new Wings;
}

Meal* FryCook::createMain()
{
    return new FriedMeal;
}