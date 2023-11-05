#ifndef BASECOCKTAIL_H
#define BASECOCKTAIL_H
#include "Cocktail.h"
#include <string>
/**
 * @brief BaseCocktail class represents a basic cocktail with a type and cost.
 * 
 */
class BaseCocktail : public Cocktail {
private:
    std::string cocktailType;
    double cocktailCost;

public:
    /**
     * @brief Construct a new Base Cocktail object
     * 
     * @param type The type of the cocktail
     * @param cost The cost of the cocktail
     */
    BaseCocktail(std::string type, double cost);

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
     * @return std::string The string representation of the cocktail
     */
    std::string toString();

    /**
     * @brief Get the cost of the cocktail
     * 
     * @return double The cost of the cocktail
     */
    double cost() const override;

    /**
     * @brief Destroy the Base Cocktail object
     * 
     */
    virtual ~BaseCocktail();
};

#endif