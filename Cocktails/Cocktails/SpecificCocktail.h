#ifndef ALCOHOLDECORATOR_H
#define ALCOHOLDECORATOR_H
#include "CocktailDecorator.h"

class SpecificCocktail : public CocktailDecorator {
protected:
    std::string alcoholDescription;

public:
    SpecificCocktail(Cocktail* baseCocktail, const std::string& alcohol);
    std::string getDescription() const override;
    std::string toString();
};

#endif
