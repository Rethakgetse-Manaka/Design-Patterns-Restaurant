#include "OrderMemento.h"

OrderMemento::OrderMemento(const std::vector<FoodItem*>& items, bool isModified)
    : savedItems(items), modified(isModified) 
{
}

std::vector<FoodItem*> OrderMemento::getSavedItems() const
{
    return savedItems;
}

bool OrderMemento::isModified() const
{
    return modified; 
}


