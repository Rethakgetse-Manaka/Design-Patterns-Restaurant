#ifndef ALCOHOLDECORATOR_H
#define ALCOHOLDECORATOR_H
#include "CocktailDecorator.h"

/**
 * @brief The AlcoholDecorator class is a concrete decorator that adds an alcohol to a cocktail.
 * 
 * It inherits from the CocktailDecorator class and overrides its getDescription() method to add the alcohol description.
 * 
 */
class AlcoholDecorator : public CocktailDecorator {
protected:
    std::string alcoholDescription;

public:
    /**
     * @brief Construct a new Alcohol Decorator object
     * 
     * @param baseCocktail The base cocktail to decorate
     * @param alcohol The alcohol to add to the cocktail
     */
    AlcoholDecorator(Cocktail* baseCocktail, const std::string& alcohol);

    /**
     * @brief Get the description of the cocktail with the added alcohol
     * 
     * @return std::string The description of the cocktail with the added alcohol
     */
    std::string getDescription() const override;

    /**
     * @brief Destroy the Alcohol Decorator object
     * 
     */
    virtual ~AlcoholDecorator();
};

#endif
