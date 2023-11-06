#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "FoodItem.h"
#include "SpecificCocktail.h"
#include "BaseCocktail.h"
#include "Cocktail.h"
#include "DrinkTray.h"
#include "Plate.h"

class Order
/**
 * The Order class represents a customer's order at a restaurant. 
 * It contains information about the customer, the table, the food items, and the drinks ordered.
 */
{
private:
    int customerID; // The ID of the customer who placed the order
    int tableID; // The ID of the table where the order was placed
    std::string customerName; // The name of the customer who placed the order
    std::vector<FoodItem*> items; // A vector of pointers to the food items ordered
    std::vector<Cocktail*> drinks; // A vector of pointers to the cocktails ordered
    DrinkTray* tray; // A pointer to the drink tray used to serve the drinks
    Plate* plate; // A pointer to the plate used to serve the food

public:
    /**
     * Constructs an Order object with the given customer ID and name.
     * @param cID The ID of the customer who placed the order
     * @param cName The name of the customer who placed the order
     */
    Order(int cID, std::string cName);
   
    /**
     * Sets the drink tray used to serve the drinks.
     * @param tray A pointer to the DrinkTray object
     */
    void setTray(DrinkTray* tray);
    
    /**
     * Sets the plate used to serve the food.
     * @param p A pointer to the Plate object
     */
    void setPlate(Plate* p);
    
    /**
     * Adds a starter to the order.
     * @param name The name of the starter
     * @param val The price of the starter
     */
    void addStarter(std::string name, double val);
    
    /**
     * Adds a food item to the order.
     * @param item The name of the food item
     * @param g Whether the food item is gluten-free or not
     * @param s Whether the food item is spicy or not
     * @param val The price of the food item
     * @param well Whether the food item is well-done or not
     */
    void addItem(std::string item, bool g, bool s, double val, bool well);
    
    /**
     * Returns a vector of pointers to the food items ordered.
     * @return A vector of pointers to the FoodItem objects
     */
    std::vector<FoodItem*> getFoodItems();
    
    /**
     * Returns the ID of the table where the order was placed.
     * @return The ID of the table
     */
    int getTableNumber();
    
    /**
     * Sets the ID of the table where the order was placed.
     * @param id The ID of the table
     */
    void setTableID(int id);
    
    /**
     * Returns a vector of pointers to the cocktails ordered.
     * @return A vector of pointers to the Cocktail objects
     */
    std::vector<Cocktail*> getDrinks();
    
    /**
     * Adds a cocktail to the order.
     * @param baseName The name of the cocktail's base liquor
     * @param alch Whether the cocktail is alcoholic or not
     * @param cost The price of the cocktail
     * @param mixes The names of the cocktail's mixers
     */
    void addDrink(std::string baseName, bool alch, double cost, std::string mixes);
    
    /**
     * Returns the ID of the customer who placed the order.
     * @return The ID of the customer
     */
    int getCustomerID();
    
    /**
     * Returns the total cost of the order.
     * @return The total cost of the order
     */
    double getTotal();
    
    /**
     * Returns the name of the customer who placed the order.
     * @return The name of the customer
     */
    std::string getCustomerName();
    
    /**
     * Returns a string representation of the order.
     * @return A string representation of the order
     */
    std::string printOrder();
    
    /**
     * Destroys the Order object and frees any memory allocated to it.
     */
    ~Order();
};

#endif
