#include "FoodItem.h"

FoodItem::FoodItem(double p,std::string n)
{
    this->price = p;
    this->name = n;
}

double FoodItem::getPrice()
{
    return price;
}

std::string FoodItem::getItemName()
{
    return name;
}