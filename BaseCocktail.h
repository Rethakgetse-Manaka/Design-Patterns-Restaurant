#ifndef BASECOCKTAIL_H
#define BASECOCKTAIL_H
#include "Cocktail.h"

class BaseCocktail : public Cocktail {
private:
    std::string cocktailType;
    double cocktailCost;

public:
    BaseCocktail(std::string type, double cost);
    std::string getDescription() const override;
    double cost() const override;
};

#endif
