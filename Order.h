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
{
private:
    int customerID;
    int tableID;
    std::string customerName;
    std::vector<FoodItem*> items;
    std::vector<Cocktail*> drinks;
    DrinkTray* tray;
    Plate* plate;

public:
    Order(int cID, std::string cName);
   
    void setTray(DrinkTray* tray);
    void setPlate(Plate* p);
    void addStarter(std::string, double val);
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
