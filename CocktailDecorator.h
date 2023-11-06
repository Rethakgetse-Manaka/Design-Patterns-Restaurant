#ifndef COCKTAILDECORATOR_H
#define COCKTAILDECORATOR_H
#include "Cocktail.h"

class CocktailDecorator : public Cocktail {
protected:
    Cocktail* cocktail;

public:
    CocktailDecorator(Cocktail* baseCocktail);
    virtual std::string getDescription() const;
    virtual double cost() const;
    virtual double getPrice() = 0;
    virtual std::string toString() = 0;
    virtual ~CocktailDecorator();
};

#endif
