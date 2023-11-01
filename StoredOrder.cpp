#include "StoredOrder.h"

void StoredOrder::storeMemento(OrderMemento* memento)
{
    mementos.push_back(memento);
}

OrderMemento* StoredOrder::retrieveMemento(int index) {
    if (index >= 0 && static_cast<size_t>(index) < mementos.size()) {
        return mementos[static_cast<size_t>(index)];
    }
    return nullptr; // Handle out-of-bounds index gracefully
}

