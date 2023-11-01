#include "Order.h"

using namespace std;

Order::Order(int cID, string cName)
{
    this->customerID = cID;
    this->customerName = cName;
}

void Order::addStarter(std::string name, double val)
{
    FoodItem* newItem = new FoodItem(name, val);
    items.push_back(newItem);
}

void Order::addItem(std::string item, bool g, bool s, double val, bool well)
{
    FoodItem* newItem = new FoodItem(item, g, s, val, well);
    items.push_back(newItem);
}

std::vector<FoodItem *> Order::getItems()
{
    return items;
}

std::vector<SpecificCocktail *> Order::getDrinks()
{
    return drinks;
}

int Order::getCustomerID()
{
    return this->customerID;
}

std::string Order::getCustomerName()
{
    return this->customerName;
}

Order::~Order()
{

}