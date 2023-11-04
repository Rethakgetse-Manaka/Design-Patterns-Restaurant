#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    Item(const std::string& name, int quantity, double cost,int stockChange);

    const std::string& getName() const;
    int getQuantity() const;
    double getCost() const;
    int getStockChange() const;
    void resetStockChange();

private:
    std::string name;
    int quantity;
    double cost;
    int stockChange;
};

#endif
