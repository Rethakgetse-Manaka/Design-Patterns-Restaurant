#ifndef FOODITEMS_H
#define FOODITEMS_H

#include <string>
#include <iostream>
#include <sstream>

class FoodItem
{
private:
    std::string mealName;
    std::string type;
    double price;
    bool garnish;
    bool sauce;
    bool welldone;
public:
    FoodItem();
    FoodItem(std::string n, double val);
    FoodItem(std::string n, bool gar, bool sauce, double val, bool well);
    double getPrice();
    std::string getName();
    std::string getType();
    std::string toString();
    ~FoodItem();
};

#endif