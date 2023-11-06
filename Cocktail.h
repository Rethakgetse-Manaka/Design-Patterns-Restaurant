/**
 * @brief The Cocktail class is an abstract base class that defines the interface for all cocktails.
 * 
 */
#ifndef COCKTAIL_H
#define COCKTAIL_H
#include <string>

class Cocktail {
public:
    /**
     * @brief Get the Description object
     * 
     * @return std::string 
     */
    virtual std::string getDescription() const = 0;

    /**
     * @brief Get the cost object
     * 
     * @return double 
     */
    virtual double cost() const = 0;

    /**
     * @brief Destroy the Cocktail object
     * 
     */
    virtual ~Cocktail();
};

#endif