#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "FoodItem.h"
#include "SpecificCocktail.h"
#include "BaseCocktail.h"
#include "Cocktail.h"

/**
 * @brief The Order class represents a customer's order at a restaurant.
 * 
 * It contains information about the customer, the table, the food items, and the drinks ordered.
 * The class provides methods to add and remove items, get the total cost, and print the order.
 */
class Order
{
private:
    int customerID;
    int tableID;
    std::string customerName;
    std::vector<FoodItem*> items;
    std::vector<Cocktail*> drinks;
public:
    Order(int cID, std::string cName);
    Order(Order* o);
    void addStarter(std::string, double val);
    void removeItem(FoodItem* item);
    void addItem(std::string item, bool g, bool s, double val, bool well);
    std::vector<FoodItem*> getFoodItems();
    int getTableNumber();
    void setTableID(int id);
    std::vector<Cocktail*> getDrinks();
    void addDrink(std::string baseName, bool alch, double cost, std::string mixes);
    int getCustomerID();
    double getTotal();
    std::string getCustomerName();
    std::string printOrder();
    ~Order();
};

#endif
