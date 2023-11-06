#ifndef COCKTAILDECORATOR_H
#define COCKTAILDECORATOR_H
#include "Cocktail.h"

/**
 * @brief The CocktailDecorator class is an abstract class that serves as the base for all cocktail decorators.
 * 
 * It inherits from the Cocktail class and contains a pointer to a Cocktail object that it decorates.
 */
class CocktailDecorator : public Cocktail {
protected:
    Cocktail* cocktail; /**< A pointer to the Cocktail object that this decorator decorates. */

public:
    /**
     * @brief Construct a new Cocktail Decorator object
     * 
     * @param baseCocktail A pointer to the Cocktail object that this decorator decorates.
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
     * @brief Destroy the Cocktail Decorator object
     * 
     */
    virtual ~CocktailDecorator();
};

#endif
