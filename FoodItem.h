#ifndef ITEM_H
#define ITEM_H
#include <string>

/**
 * @brief The FoodItem class represents a food item with a name and price.
 * 
 * This class is used to represent a food item with a name and price. It also includes
 * a meal name, which is not currently used. The class includes methods to get the item name
 * and price, which are used in the Memento pattern.
 */
class FoodItem {
    private:
        double price;
        std::string name;
        std::string mealName;
    public:
        /**
         * @brief Constructs a new FoodItem object with the given price and name.
         * 
         * @param p The price of the food item.
         * @param n The name of the food item.
         */
        FoodItem(double p,std::string n);
       
        /**
         * @brief Gets the name of the food item.
         * 
         * @return The name of the food item.
         */
        std::string getItemName() const;  

        /**
         * @brief Gets the price of the food item.
         * 
         * @return The price of the food item.
         */
        double getPrice() const;       
};

#endif