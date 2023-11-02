#include "FoodItem.h"

using namespace std;

FoodItem::FoodItem()
{
    this->mealName = "Meal";
    this->garnish = false;
    this->sauce = false;
    this->type = "Main";
    this->welldone = false;
}

FoodItem::FoodItem(std::string n, double v)
{
    this->mealName = n;
    this->type = "Starter";
    this->garnish = false;
    this->sauce = false;
    this->price = v;
    this->welldone = false;
}

FoodItem::FoodItem(std::string n, bool gar, bool sauce, double v, bool well)
{
    this->mealName = n;
    this->type = "Main";
    this->garnish = gar;
    this->sauce = sauce;
    this->price = v;
    this->welldone = well;
}

double FoodItem::getPrice()
{
    return this->price;
}

std::string FoodItem::getName()
{
    return this->mealName;
}

std::string FoodItem::getType()
{
    return this->type;
}

std::string FoodItem::toString()
{
    stringstream ss;
    ss << this->price;
    return this->type + ": " + this->mealName + " R" + ss.str() + "\n";
}

FoodItem::~FoodItem()
{
}