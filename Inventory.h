#ifndef INVENTORY_H
#define INVENTORY_H

#include <list>
#include <string>
#include "Item.h"

class Observer;

class Inventory {
public:
    void registerObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers();
    void addStock(Item* item);
    int removeStock(std::string item);
    //void useStock(Item item, int quantity);
    std::string stockToString();
    int getStockLevel(Item* item);
    std::list<Item*> getItems();

private:
    std::list<Observer*> observers;
    std::list<Item*> stock;
};

#endif
