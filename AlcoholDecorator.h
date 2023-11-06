#ifndef ALCOHOLDECORATOR_H
#define ALCOHOLDECORATOR_H
#include "CocktailDecorator.h"

class AlcoholDecorator : public CocktailDecorator {
protected:
    std::string alcoholDescription;

public:
    AlcoholDecorator(Cocktail* baseCocktail, const std::string& alcohol);
    std::string getDescription() const override;
    virtual ~AlcoholDecorator();
};

#endif
