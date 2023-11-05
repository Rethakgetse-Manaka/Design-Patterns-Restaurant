#ifndef SPECIFICCOCKTAIL_H
#define SPECIFICCOCKTAIL_H
#include "CocktailDecorator.h"

class SpecificCocktail : public CocktailDecorator {
protected:
    std::string alcoholDescription;

public:
    SpecificCocktail(Cocktail* baseCocktail, const std::string& alcohol);
    std::string getDescription() const override;
    std::string toString();
    double cost() const override;

};

#endif
