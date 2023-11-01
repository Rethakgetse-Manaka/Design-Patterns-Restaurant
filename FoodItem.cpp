#include "FoodItem.h"

FoodItem::FoodItem(double p,std::string n)
{
    this->price = p;
    this->name = n;
}

// changed both the getPrice and getItemName to const
double FoodItem::getPrice() const
{
    return price;
}

std::string FoodItem::getItemName() const
{
    return name;
}