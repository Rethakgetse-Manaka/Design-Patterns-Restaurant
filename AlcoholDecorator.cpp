#include "AlcoholDecorator.h"

AlcoholDecorator::AlcoholDecorator(Cocktail* baseCocktail, const std::string& alcohol) : CocktailDecorator(baseCocktail), alcoholDescription(alcohol) {}

std::string AlcoholDecorator::getDescription() const {
    return cocktail->getDescription() + " with " + alcoholDescription;
}

AlcoholDecorator::~AlcoholDecorator()
{
}
