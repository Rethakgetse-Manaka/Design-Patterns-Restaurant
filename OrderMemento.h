#ifndef ORDERMEMENTO_H
#define ORDERMEMENTO_H

#include "FoodItem.h"
#include <vector>

class OrderMemento
{
private:
    std::vector<FoodItem*> savedItems;
    bool modified;

public:
    OrderMemento(const std::vector<FoodItem*>& items, bool isModified); 
    std::vector<FoodItem*> getSavedItems() const;
    bool isModified() const;
  
};

#endif
