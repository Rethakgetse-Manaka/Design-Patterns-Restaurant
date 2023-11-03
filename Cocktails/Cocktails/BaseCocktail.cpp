#include "BaseCocktail.h"

BaseCocktail::BaseCocktail(std::string type, double cost)
    : cocktailType(type), cocktailCost(cost) {}

std::string BaseCocktail::getDescription() const {
    return cocktailType;
}

double BaseCocktail::cost() const {
    return cocktailCost;
}
