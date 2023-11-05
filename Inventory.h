#ifndef INVENTORY_H
#define INVENTORY_H

#include <list>
#include <string>
#include "Item.h"

class Observer;

/**
 * The Inventory class represents a collection of items that can be observed by registered observers.
 */
class Inventory {
public:
    /**
     * Registers an observer to be notified when the inventory changes.
     * @param observer A pointer to the observer to be registered.
     */
    void registerObserver(Observer* observer);

    /**
     * Removes a previously registered observer.
     * @param observer A pointer to the observer to be removed.
     */
    void removeObserver(Observer* observer);

    /**
     * Notifies all registered observers that the inventory has changed.
     */
    void notifyObservers();

    /**
     * Adds an item to the inventory.
     * @param item A pointer to the item to be added.
     */
    void addStock(Item* item);

    /**
     * Removes an item from the inventory.
     * @param item The name of the item to be removed.
     * @return The quantity of the item that was removed.
     */
    int removeStock(std::string item);

    /**
     * Returns a string representation of the current inventory.
     * @return A string representation of the current inventory.
     */
    std::string stockToString();

    /**
     * Returns the current stock level of a given item.
     * @param item A pointer to the item to check the stock level of.
     * @return The current stock level of the given item.
     */
    int getStockLevel(Item* item);

    /**
     * Returns a list of all items in the inventory.
     * @return A list of all items in the inventory.
     */
    std::list<Item*> getItems();

private:
    std::list<Observer*> observers; /**< A list of all registered observers. */
    std::list<Item*> stock; /**< A list of all items in the inventory. */
};

#endif
