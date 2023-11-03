#include "SpecificCocktail.h"

SpecificCocktail::SpecificCocktail(Cocktail* baseCocktail, const std::string& alcohol) : CocktailDecorator(baseCocktail), alcoholDescription(alcohol) {}

std::string SpecificCocktail::getDescription() const {
    return cocktail->getDescription() + " with " + alcoholDescription;
}

std::string SpecificCocktail::toString()
{
    std::string ret = cocktail->getDescription() + " with " + alcoholDescription + " : " + std::to_string(cocktail->cost());
    return ret;
}

