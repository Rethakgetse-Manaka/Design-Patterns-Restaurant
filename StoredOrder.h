#ifndef STOREDORDER_H
#define STOREDORDER_H

#include "OrderMemento.h"

#include <vector>

/**
 * @brief The StoredOrder class represents an object that stores a collection of OrderMemento objects.
 */
class StoredOrder
{
private:
    std::vector<OrderMemento*> mementos;

public:
    /**
     * @brief Adds an OrderMemento object to the collection.
     * 
     * @param memento The OrderMemento object to be added.
     */
    void storeMemento(OrderMemento* memento);

    /**
     * @brief Retrieves an OrderMemento object from the collection.
     * 
     * @param index The index of the OrderMemento object to be retrieved.
     * @return The OrderMemento object at the specified index.
     */
    OrderMemento* retrieveMemento(int index);
};

#endif
