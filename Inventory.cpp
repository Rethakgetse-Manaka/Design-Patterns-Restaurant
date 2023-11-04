#include "Inventory.h"
#include "Observer.h"

void Inventory::registerObserver(Observer* observer) {
    observers.push_back(observer);
}

void Inventory::removeObserver(Observer* observer) {
    observers.remove(observer);
}

void Inventory::notifyObservers() {
    for (Observer* observer : observers) {
        observer->update();
    }
}

void Inventory::addStock(Item item)
{
    stock.push_back(item);
    notifyObservers();
}

std::string Inventory::stockToString() {
    std::string stockStr = "Stock List:\n";

    for (const Item& item : stock) {
        stockStr += "Name: " + item.getName() +
                    ", Quantity: " + std::to_string(item.getQuantity()) +
                    ", Cost: $" + std::to_string(item.getCost()) +
                    "\n";
    }

    return stockStr;
}


int Inventory::getStockLevel(Item item)
{
    for (const Item& existingItem : stock)
    {
        if (existingItem.getName() == item.getName())
        {
            return existingItem.getQuantity();
        }
    }
    return 0;
}
std::list<Item> Inventory::getItems() {
    return stock;
}