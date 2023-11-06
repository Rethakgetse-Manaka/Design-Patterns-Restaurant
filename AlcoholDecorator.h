#ifndef ALCOHOLDECORATOR_H
#define ALCOHOLDECORATOR_H

#include "CocktailDecorator.h"

/**
 * @brief The AlcoholDecorator class is a concrete decorator that adds an alcohol to a cocktail.
 * 
 * It inherits from the CocktailDecorator class and overrides its getDescription() method.
 * It also has a protected member variable that holds the description of the added alcohol.
 */
class AlcoholDecorator : public CocktailDecorator {
protected:
    std::string alcoholDescription;

public:
    /**
     * @brief Construct a new Alcohol Decorator object.
     * 
     * @param baseCocktail The cocktail to decorate.
     * @param alcohol The description of the alcohol to add.
     */
    AlcoholDecorator(Cocktail* baseCocktail, const std::string& alcohol);

    /**
     * @brief Get the description of the decorated cocktail.
     * 
     * @return std::string The description of the decorated cocktail.
     */
    std::string getDescription() const override;

    /**
     * @brief Destroy the Alcohol Decorator object.
     * 
     */
    virtual ~AlcoholDecorator();
};

#endif
