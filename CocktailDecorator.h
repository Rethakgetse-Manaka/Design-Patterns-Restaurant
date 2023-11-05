#ifndef COCKTAILDECORATOR_H
#define COCKTAILDECORATOR_H

#include "Cocktail.h"

/**
 * @brief The CocktailDecorator class is an abstract class that serves as the base for all cocktail decorators.
 * 
 * It inherits from the Cocktail class and provides a common interface for all decorators to implement.
 * 
 */
class CocktailDecorator : public Cocktail {
protected:
    Cocktail* cocktail;

public:
    /**
     * @brief Construct a new Cocktail Decorator object
     * 
     * @param baseCocktail The base cocktail to decorate
     */
    CocktailDecorator(Cocktail* baseCocktail);

    /**
     * @brief Get the description of the cocktail
     * 
     * @return std::string The description of the cocktail
     */
    virtual std::string getDescription() const;

    /**
     * @brief Get the cost of the cocktail
     * 
     * @return double The cost of the cocktail
     */
    virtual double cost() const;

    /**
     * @brief Get the price of the cocktail
     * 
     * @return double The price of the cocktail
     */
    virtual double getPrice() = 0;

    /**
     * @brief Get a string representation of the cocktail
     * 
     * @return std::string A string representation of the cocktail
     */
    virtual std::string toString() = 0;

    /**
     * @brief Destroy the Cocktail Decorator object
     * 
     */
    virtual ~CocktailDecorator();
};

#endif
