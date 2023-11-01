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

void Order::addItem(std::string item, bool g, bool s, double val,bool well)
{
    FoodItem* newItem = new FoodItem(item, g, s, val,well);
    items.push_back(newItem);
}

std::vector<FoodItem*> Order::getFoodItems()
{
    return items;
}

void Order::removeItem(std::string item)
{
    items.erase(std::remove_if(items.begin(), items.end(), 
    [&](FoodItem* itemPtr) { return itemPtr->getMealName() == item; }), items.end());
}
std::string Order::getCustomerName()
{
    return customerName;
}

Order::~Order()
{

}
