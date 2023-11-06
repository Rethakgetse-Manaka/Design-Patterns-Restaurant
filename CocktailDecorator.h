#ifndef COCKTAILDECORATOR_H
#define COCKTAILDECORATOR_H
#include "Cocktail.h"

/**
 * @brief The CocktailDecorator class is an abstract class that serves as a base for all cocktail decorators.
 * 
 * It inherits from the Cocktail class and provides a common interface for all decorators to implement.
 * The class contains a pointer to a Cocktail object that it decorates.
 */
class CocktailDecorator : public Cocktail {
protected:
    Cocktail* cocktail; /**< A pointer to the Cocktail object that is being decorated. */

public:
    /**
     * @brief Construct a new Cocktail Decorator object
     * 
     * @param baseCocktail A pointer to the Cocktail object that is being decorated.
     */
    CocktailDecorator(Cocktail* baseCocktail);

    /**
     * @brief Get the description of the decorated cocktail.
     * 
     * @return std::string The description of the decorated cocktail.
     */
    virtual std::string getDescription() const;

    /**
     * @brief Get the cost of the decorated cocktail.
     * 
     * @return double The cost of the decorated cocktail.
     */
    virtual double cost() const;

    /**
     * @brief Get the price of the decorated cocktail.
     * 
     * @return double The price of the decorated cocktail.
     */
    virtual double getPrice() = 0;

    /**
     * @brief Get a string representation of the decorated cocktail.
     * 
     * @return std::string A string representation of the decorated cocktail.
     */
    virtual std::string toString() = 0;

    /**
     * @brief Destroy the Cocktail Decorator object
     * 
     */
    virtual ~CocktailDecorator();
};

#endif
