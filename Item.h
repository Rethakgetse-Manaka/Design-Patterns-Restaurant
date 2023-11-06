#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "FoodItem.h"

/**
 * @brief The Item class represents an item in a shopping cart.
 * 
 */
class Item {
public:
    /**
     * @brief Construct a new Item object.
     * 
     * @param item A pointer to the FoodItem that this Item represents.
     * @param quantity The quantity of the FoodItem.
     * @param stockChange The change in stock of the FoodItem.
     */
    Item(FoodItem* item, int quantity, int stockChange);

    /**
     * @brief Get the name of the FoodItem.
     * 
     * @return std::string The name of the FoodItem.
     */
    std::string getName();

    /**
     * @brief Get the quantity of the FoodItem.
     * 
     * @return int The quantity of the FoodItem.
     */
    int getQuantity() const;

    /**
     * @brief Decrement the quantity of the FoodItem by 1.
     * 
     */
    void decrementQuantity();

    /**
     * @brief Get the cost of the FoodItem.
     * 
     * @return double The cost of the FoodItem.
     */
    double getCost() const;

    /**
     * @brief Get the change in stock of the FoodItem.
     * 
     * @return int The change in stock of the FoodItem.
     */
    int getStockChange() const;

    /**
     * @brief Reset the change in stock of the FoodItem to 0.
     * 
     */
    void resetStockChange();

    /**
     * @brief Destroy the Item object.
     * 
     */
    ~Item();
private:
    FoodItem* foodItem; // A pointer to the FoodItem that this Item represents.
    int stockChange; // The change in stock of the FoodItem.
    int quantity; // The quantity of the FoodItem.
};

#endif
