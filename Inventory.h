#ifndef INVENTORY_H
#define INVENTORY_H

#include <list>
#include <string>
#include <vector>
#include "Item.h"

class Observer;

/**
 * The Inventory class represents a collection of items that can be added to or removed from.
 * It also allows for observers to be registered and notified of changes to the inventory.
 */
class Inventory {
public:
    /**
     * Constructs an empty Inventory object.
     */
    Inventory();
    
    /**
     * Registers an observer to be notified of changes to the inventory.
     * @param observer A pointer to the observer object.
     */
    void registerObserver(Observer* observer);
    
    /**
     * Removes an observer from the list of observers to be notified of changes to the inventory.
     * @param observer A pointer to the observer object.
     */
    void removeObserver(Observer* observer);
    
    /**
     * Notifies all registered observers of changes to the inventory.
     */
    void notifyObservers();
    
    /**
     * Adds an item to the inventory.
     * @param item A pointer to the item object to be added.
     */
    void addStock(Item* item);
    
    /**
     * Removes an item from the inventory.
     * @param item The name of the item to be removed.
     * @return The quantity of the item that was removed.
     */
    int removeStock(std::string item);
    
    /**
     * Returns a string representation of the current stock in the inventory.
     * @return A string representation of the current stock in the inventory.
     */
    std::string stockToString();
    
    /**
     * Returns the current stock level of a given item.
     * @param item A pointer to the item object to check the stock level of.
     * @return The current stock level of the given item.
     */
    int getStockLevel(Item* item);
    
    /**
     * Returns a vector of pointers to all the items in the inventory.
     * @return A vector of pointers to all the items in the inventory.
     */
    std::vector<Item*> getItems();
    
    /**
     * Destroys the Inventory object and frees any memory allocated to it.
     */
    ~Inventory();
    
private:
    std::vector<Observer*> observers; // List of observers to be notified of changes to the inventory.
    std::vector<Item*> stock; // List of items in the inventory.
};

#endif
