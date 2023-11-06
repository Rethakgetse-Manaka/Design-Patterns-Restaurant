#include "Item.h"

Item::Item(FoodItem* item, int q, int stockChange)
    : foodItem(item), stockChange(0), quantity(q) {}

std::string Item::getName() {
    return foodItem->getMealName();
}

int Item::getQuantity() const {
    return quantity;
}

void Item::decrementQuantity()
{
    if(quantity == 0){
        return;
    }else{
        --quantity;
    }
    
}

double Item::getCost() const{
    return foodItem->getPrice();
}

int Item::getStockChange() const {
    return stockChange;
}

void Item::resetStockChange() {
    stockChange = 0;
}

Item::~Item()
{
    if(foodItem != nullptr)
    {
        delete foodItem;
        foodItem = nullptr;
    }
}
