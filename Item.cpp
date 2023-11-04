#include "Item.h"

Item::Item(const std::string& name, int quantity, double cost, int stockChange)
    : name(name), quantity(quantity), cost(cost), stockChange(0) {}

const std::string& Item::getName() const {
    return name;
}

int Item::getQuantity() const {
    return quantity;
}

double Item::getCost() const{
    return cost;
}

int Item::getStockChange() const {
    return stockChange;
}

void Item::resetStockChange() {
    stockChange = 0;
}
