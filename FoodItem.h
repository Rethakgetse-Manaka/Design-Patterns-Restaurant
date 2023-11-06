#ifndef FOODITEMS_H
#define FOODITEMS_H

#include <string>
#include <iostream>
#include <sstream>

//class FoodItem
/**
 * @brief The FoodItem class represents a food item in a restaurant menu.
 * 
 */
class FoodItem{
private:
    std::string mealName; /**< The name of the food item. */
    std::string type; /**< The type of the food item. */
    double price; /**< The price of the food item. */
    bool garnish; /**< Whether the food item has garnish. */
    bool sauce; /**< Whether the food item has sauce. */
    bool welldone; /**< Whether the food item is well done. */
public:
    /**
     * @brief Construct a new Food Item object with default values.
     * 
     */
    FoodItem();

    /**
     * @brief Construct a new Food Item object with a name and price.
     * 
     * @param n The name of the food item.
     * @param val The price of the food item.
     */
    FoodItem(std::string n, double val);

    /**
     * @brief Construct a new Food Item object with a name, garnish, sauce, price and well done status.
     * 
     * @param n The name of the food item.
     * @param gar Whether the food item has garnish.
     * @param sauce Whether the food item has sauce.
     * @param val The price of the food item.
     * @param well Whether the food item is well done.
     */
    FoodItem(std::string n, bool gar, bool sauce, double val, bool well);
    FoodItem(FoodItem* f);

    /**
     * @brief Get the price of the food item.
     * 
     * @return double The price of the food item.
     */
    double getPrice();

    /**
     * @brief Get the name of the food item.
     * 
     * @return std::string The name of the food item.
     */
    std::string getName();

    /**
     * @brief Get the type of the food item.
     * 
     * @return std::string The type of the food item.
     */
    std::string getType();

    /**
     * @brief Get a string representation of the food item.
     * 
     * @return std::string A string representation of the food item.
     */
    std::string toString();

    std::string getMealName();

    /**
     * @brief Destroy the Food Item object.
     * 
     */

    bool getGarnish();
    bool getWellDone();
    bool getSauce();
    ~FoodItem();
};

// private:
//     std::string mealName;
//     std::string type;
//     double price;
//     bool garnish;
//     bool sauce;
//     bool welldone;
// public:
//     FoodItem();
//     FoodItem(std::string n, double val);
//     FoodItem(std::string n, bool gar, bool sauce, double val, bool well);
//     double getPrice();
//     std::string getName();
//     std::string getType();
//     std::string toString();
//     ~FoodItem();
// };

#endif