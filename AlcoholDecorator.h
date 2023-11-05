/**
 * @file AlcoholDecorator.h
 * @brief Header file for AlcoholDecorator class.
 */

#ifndef ALCOHOLDECORATOR_H
#define ALCOHOLDECORATOR_H

#include "CocktailDecorator.h"

/**
 * @brief A class representing an alcohol decorator for a cocktail.
 */
class AlcoholDecorator : public CocktailDecorator {
protected:
    std::string alcoholDescription; /**< A string representing the description of the alcohol. */

public:
    /**
     * @brief Constructs a new AlcoholDecorator object.
     * 
     * @param baseCocktail A pointer to the base cocktail.
     * @param alcohol A string representing the description of the alcohol.
     */
    AlcoholDecorator(Cocktail* baseCocktail, const std::string& alcohol);

    /**
     * @brief Returns the description of the cocktail with the alcohol decorator.
     * 
     * @return A string representing the description of the cocktail with the alcohol decorator.
     */
    std::string getDescription() const override;

    /**
     * @brief Destroys the AlcoholDecorator object.
     */
    virtual ~AlcoholDecorator();
};

#endif
