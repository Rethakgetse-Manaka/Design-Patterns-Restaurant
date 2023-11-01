#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "FoodItem.h"
#include "SpecificCocktail.h"

class Order
{
private:
    int customerID;
    int tableID;
    std::string customerName;
    std::vector<FoodItem*> items;
    std::vector<SpecificCocktail*> drinks;
public:
    Order(int cID, std::string cName);
    void addStarter(std::string, double val);
    void addItem(std::string item, bool g, bool s, double val, bool well);
    std::vector<FoodItem*> getItems();
    int getTableID();
    void setTableID(int id);
    std::vector<SpecificCocktail*> getDrinks();
    void addDrink();
    int getCustomerID();
    std::string getCustomerName();
    ~Order();
};

#endif