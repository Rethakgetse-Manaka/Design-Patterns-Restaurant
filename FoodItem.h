#ifndef FOODITEMS_H
#define FOODITEMS_H
#include <iostream>
#include <string>

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

    ~FoodItem();
};

#endif