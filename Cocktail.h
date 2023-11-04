#ifndef COCKTAIL_H
#define COCKTAIL_H
#include <string>

class Cocktail {
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
    virtual double getPrice() = 0; 
    virtual std::string toString() = 0;
    virtual ~Cocktail();
};

#endif
