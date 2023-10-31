#include "GrillChef.h"

Meal* GrillChef::createStarter()
{
    return new BeefKebab;
}

Meal* GrillChef::createMain()
{
    return new BeefBurger;
}