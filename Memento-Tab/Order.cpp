#include "Order.h"

using namespace std;

Order::Order(int cID, string cName)
{
    this->customerID = cID;
    this->customerName = cName;
}

void Order::addStarter(std::string name, double val)
{
    FoodItem *newItem = new FoodItem(name, val);
    items.push_back(newItem);
}

void Order::addItem(std::string item, bool g, bool s, double val, bool well)
{
    FoodItem *newItem = new FoodItem(item, g, s, val, well);
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

void Order::addDrink(std::string baseName, bool alch, double cost, vector<string> mixes)
{
    // SpecificCocktail* newDrink = new SpecificCocktail(baseName, alch, cost, mixes);
    // drinks.push_back(newDrink);
}

int Order::getCustomerID()
{
    return this->customerID;
}

double Order::getTotal()
{
    double tot = 0;
    for (int i = 0; i < (int)items.size(); i++)
    {
        tot += items[i]->getPrice();
    }
    // for(int i = 0; i < (int)drinks.size(); i++)
    // {
    //     tot += drinks[i]->getPrice();
    // }
    return tot;
}

std::string Order::getCustomerName()
{
    return this->customerName;
}

std::string Order::printOrder()
{
    string order = "-------YOUR-ORDER-------\n";
    stringstream ss;
    ss << customerID;
    order += "(" + ss.str() + ") " + "Customer Name: " + customerName + "\n";

    if (items.size() > 0)
    {
        order += "Food Items:\n";
        for (int i = 0; i < (int)items.size(); i++)
        {
            order += items[i]->toString() + "\n";
        }
    }else{
        order += "No food items ordered\n";
    }

    // if(drinks.size() > 0){
    //     order += "Drinks:\n";
    //     for(int i = 0; i < (int)drinks.size(); i++)
    //     {
    //         order += drinks[i]->toString() + "\n";
    //     }
    // }else{
    //     order += "No drinks ordered\n";
    //}
    return order;
}

Order::~Order()
{
    for(int i = 0; i < (int)items.size(); i++)
    {
        delete items[i];
    }
    items.clear();

    for(int i = 0; i < (int)drinks.size(); i++){
        delete drinks[i];
    }
    drinks.clear();
}