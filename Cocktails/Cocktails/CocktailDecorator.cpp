#include "CocktailDecorator.h"

CocktailDecorator::CocktailDecorator(Cocktail* baseCocktail) : cocktail(baseCocktail) {}

std::string CocktailDecorator::getDescription() const {
    return cocktail->getDescription();
}

double CocktailDecorator::cost() const {
    return cocktail->cost();
}
