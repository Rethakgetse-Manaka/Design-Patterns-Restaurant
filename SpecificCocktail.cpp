#include "SpecificCocktail.h"

using namespace std;
SpecificCocktail::SpecificCocktail(Cocktail* baseCocktail, const std::string& alcohol) : CocktailDecorator(baseCocktail), alcoholDescription(alcohol) {}

std::string SpecificCocktail::getDescription() const {
    if (alcoholDescription == "") {
        return cocktail->getDescription();
    }
    return cocktail->getDescription() + " with " + alcoholDescription;
}

double SpecificCocktail::getPrice()
{
    return cocktail->cost();
}

std::string SpecificCocktail::toString()
{
    stringstream s;
    s << cocktail->cost();
    std::string ret;
    if (alcoholDescription == "") {
        ret = "| " + cocktail->getDescription() + " : R" + s.str();
    }
    else {
        ret = "| " + cocktail->getDescription() + " with " + alcoholDescription + " : R" + s.str();
    }
    
    return ret;
}

SpecificCocktail::~SpecificCocktail()
{
}
