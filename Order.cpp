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

int Order::getTableID()
{
    return this->tableID;
}

void Order::setTableID(int id)
{
    this->tableID = id;
}

std::vector<SpecificCocktail *> Order::getDrinks()
{
    return drinks;
}

void Order::addDrink()
{
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