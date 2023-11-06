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

FoodItem::FoodItem(FoodItem *f)
{
    if(f != nullptr)
    {
        this->mealName = f->mealName;
        this->type = f->type;
        this->garnish = f->garnish;
        this->sauce = f->sauce;
        this->price = f->price;
        this->welldone = f->welldone;

    }
    
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
    return "| " + this->type + ": " + this->mealName + " : R" + ss.str();
}

std::string FoodItem::getMealName() {
    return this->mealName;
}

bool FoodItem::getGarnish()
{
    return garnish;
}

bool FoodItem::getWellDone()
{
    return welldone;
}

bool FoodItem::getSauce()
{
    return sauce;
}

FoodItem::~FoodItem()
{
}