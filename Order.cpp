#include "Order.h"

Order::Order()
{
    tableNumber = 0; 
    waiter = nullptr; 
    custId = "";
    isModified = false;
}

const std::vector<FoodItem*>& Order::getItems() const 
{
    return items;
}

void Order::addItem(FoodItem* i)
{
    items.push_back(i);
    isModified = true;
}

void Order::removeItem(FoodItem* i) 
{
    for (auto it = items.begin(); it != items.end(); ++it) 
    {
        if (*it == i) {
            items.erase(it);
            isModified = true;
            //delete i;
            break;
        }
    }
}


void Order::modifyOrder()
{
    isModified = true;
}

void Order::cancelOrder()
{
    items.clear();
    isModified = false;
}

OrderMemento* Order::createMemento()
{
    return new OrderMemento(items, isModified);
}

void Order::restoreFromMemento(OrderMemento* memento)
{
   
    items = memento->getSavedItems();
    isModified = memento->isModified();
}

