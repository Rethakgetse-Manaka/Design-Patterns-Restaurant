#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "FoodItem.h"

class Order
{
private:
    int customerID;
    std::string customerName;
    std::vector<FoodItem*> items;
public:
    Order(int cID, std::string cName);
    void addStarter(std::string, double val);
    void addItem(std::string item, bool g, bool s, double val);
    ~Order();
};

#endif