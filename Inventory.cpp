#include "Inventory.h"
#include "Observer.h"

using namespace std;
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

void Inventory::addStock(Item* item)
{
    stock.push_back(item);
    notifyObservers();
}

int Inventory::removeStock(string item)
{
    for (list<Item*>::iterator it = stock.begin(); it != stock.end(); ++it) {
        if ((*it)->getName() == item) {
            (*it)->decrementQuantity();
            return (*it)->getQuantity();
        }
    }
}

std::string Inventory::stockToString() {
    std::string stockStr = "Stock List:\n";

    for (Item* item : stock) {
        stockStr += "Name: " + item->getName() +
                    ", Quantity: " + std::to_string(item->getQuantity()) +
                    ", Cost: $" + std::to_string(item->getCost()) +
                    "\n";
    }

    return stockStr;
}


int Inventory::getStockLevel(Item* item)
{
    for (Item* existingItem : stock)
    {
        if (existingItem->getName() == item->getName())
        {
            return existingItem->getQuantity();
        }
    }
    return 0;
}
std::list<Item*> Inventory::getItems() {
    return stock;
}