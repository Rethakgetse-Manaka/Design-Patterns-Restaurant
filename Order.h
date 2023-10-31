#ifndef Order_H
#define Order_H
#include "FoodItem.h"
#include <vector>
class Waiter;
class Order
{
    public:
        int tableNumber;
        Waiter* waiter;
        std::vector<FoodItem*> items;
        std::string custId;
        Order();
        void addItem(FoodItem* i);
        void removeItem(FoodItem* i);
    


};
#endif