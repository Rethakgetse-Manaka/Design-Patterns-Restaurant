#ifndef COCKTAIL_H
#define COCKTAIL_H
#include <string>

/**
 * @brief The Cocktail class is an abstract base class that defines the interface for all cocktails.
 * 
 */
class Cocktail {
public:
    /**
     * @brief Get the description of the cocktail.
     * 
     * @return std::string The description of the cocktail.
     */
    virtual std::string getDescription() const = 0;

    /**
     * @brief Get the cost of the cocktail.
     * 
     * @return double The cost of the cocktail.
     */
    virtual double cost() const = 0;

    /**
     * @brief Get the price of the cocktail.
     * 
     * @return double The price of the cocktail.
     */
    virtual double getPrice() = 0; 

    /**
     * @brief Get a string representation of the cocktail.
     * 
     * @return std::string A string representation of the cocktail.
     */
    virtual std::string toString() = 0;

    /**
     * @brief Destroy the Cocktail object.
     * 
     */
    virtual ~Cocktail();
};

#endif
