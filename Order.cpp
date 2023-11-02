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

int Order::getTableNumber()
{
    return tableNumber;
}

int Order::getCustomerID()
{
    return customerID;
}

std::string Order::getCustomerName()
{
    return customerName;
}

Order::~Order()
{

}
