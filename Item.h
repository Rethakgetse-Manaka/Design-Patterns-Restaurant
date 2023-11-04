#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "FoodItem.h"

class Item {
public:
    Item(FoodItem* item, int quantity, int stockChange);

    std::string getName();
    int getQuantity() const;
    void decrementQuantity();
    double getCost() const;
    int getStockChange() const;
    void resetStockChange();

private:
    FoodItem* foodItem;
    int stockChange;
    int quantity;
};

#endif
