#ifndef ALCOHOLDECORATOR_H
#define ALCOHOLDECORATOR_H
#include "CocktailDecorator.h"
#include <sstream>

class SpecificCocktail : public CocktailDecorator {
protected:
    std::string alcoholDescription;

public:
    SpecificCocktail(Cocktail* baseCocktail, const std::string& alcohol);
    std::string getDescription() const override;
    double getPrice();
    std::string toString();
    virtual ~SpecificCocktail();
};

#endif