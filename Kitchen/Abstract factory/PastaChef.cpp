#include "PastaChef.h"

Meal* PastaChef::createStarter()
{
    return new Ramen;
}

Meal* PastaChef::createMain()
{
    return new Alfredo;
}