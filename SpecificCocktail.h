#ifndef ALCOHOLDECORATOR_H
#define ALCOHOLDECORATOR_H
#include "CocktailDecorator.h"
#include <sstream>

/**
 * @brief The SpecificCocktail class is a concrete decorator that adds a specific type of alcohol to a base cocktail.
 * 
 */
class SpecificCocktail : public CocktailDecorator {
protected:
    std::string alcoholDescription;

public:
    /**
     * @brief Construct a new Specific Cocktail object
     * 
     * @param baseCocktail The base cocktail to decorate
     * @param alcohol The specific type of alcohol to add to the cocktail
     */
    SpecificCocktail(Cocktail* baseCocktail, const std::string& alcohol);

    /**
     * @brief Get the description of the cocktail
     * 
     * @return std::string The description of the cocktail
     */
    std::string getDescription() const override;

    /**
     * @brief Get the price of the cocktail
     * 
     * @return double The price of the cocktail
     */
    double getPrice();

    /**
     * @brief Get a string representation of the cocktail
     * 
     * @return std::string A string representation of the cocktail
     */
    std::string toString();

    /**
     * @brief Destroy the Specific Cocktail object
     * 
     */
    virtual ~SpecificCocktail();
};

#endif
