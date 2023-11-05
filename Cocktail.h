#ifndef COCKTAIL_H
#define COCKTAIL_H
 #include <string>
/**
 * @brief The Cocktail class is an abstract base class that defines the interface for all cocktails.
 */
class Cocktail {
public:
    /**
     * @brief Returns a string description of the cocktail.
     * @return A string description of the cocktail.
     */
    virtual std::string getDescription() const = 0;

    /**
     * @brief Returns the cost of the cocktail.
     * @return The cost of the cocktail.
     */
    virtual double cost() const = 0;

    /**
     * @brief Returns the price of the cocktail.
     * @return The price of the cocktail.
     */
    virtual double getPrice() = 0; 

    /**
     * @brief Returns a string representation of the cocktail.
     * @return A string representation of the cocktail.
     */
    virtual std::string toString() = 0;

    /**
     * @brief Virtual destructor for the Cocktail class.
     */
    virtual ~Cocktail();
};

#endif
