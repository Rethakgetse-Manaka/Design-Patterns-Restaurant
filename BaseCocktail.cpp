#include "BaseCocktail.h"

BaseCocktail::BaseCocktail(std::string type, double cost)
    : cocktailType(type), cocktailCost(cost) {}

std::string BaseCocktail::getDescription() const {
    return cocktailType;
}

double BaseCocktail::getPrice()
{
    return 0.0;
}

std::string BaseCocktail::toString()
{
    return std::string();
}

double BaseCocktail::cost() const {
    return cocktailCost;
}

BaseCocktail::~BaseCocktail()
{
    
}
