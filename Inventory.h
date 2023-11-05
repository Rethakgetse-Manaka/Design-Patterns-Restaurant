#ifndef INVENTORY_H
#define INVENTORY_H

#include <list>
#include <string>
#include <vector>
#include "Item.h"

class Observer;

class Inventory {
public:
    Inventory();
    void registerObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers();
    void addStock(Item* item);
    int removeStock(std::string item);
    //void useStock(Item item, int quantity);
    std::string stockToString();
    int getStockLevel(Item* item);
    std::vector<Item*> getItems();
    ~Inventory();
private:
    std::vector<Observer*> observers;
    std::vector<Item*> stock;
};

#endif
