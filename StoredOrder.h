#ifndef STOREDORDER_H
#define STOREDORDER_H

#include "OrderMemento.h"

#include <vector>

class StoredOrder
{
private:
    std::vector<OrderMemento*> mementos;

public:
    void storeMemento(OrderMemento* memento);
    OrderMemento* retrieveMemento(int index);
   
};

#endif
