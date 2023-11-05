#ifndef COCKTAIL_H
#define COCKTAIL_H
#include <string>

class Cocktail {
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};

#endif
