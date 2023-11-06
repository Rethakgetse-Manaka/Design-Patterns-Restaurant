#ifndef ORDERMEMENTO_H
#define ORDERMEMENTO_H

#include "FoodItem.h"
#include <vector>

/**
 * @brief The OrderMemento class represents a memento object that stores the state of an order.
 * 
 */
class OrderMemento
{
private:
    std::vector<FoodItem*> savedItems;
    bool modified;

public:
    /**
     * @brief Construct a new OrderMemento object.
     * 
     * @param items The vector of FoodItem pointers to be saved.
     * @param isModified The boolean value indicating whether the order has been modified.
     */
    OrderMemento(const std::vector<FoodItem*>& items, bool isModified); 

    /**
     * @brief Get the saved items vector.
     * 
     * @return std::vector<FoodItem*> The vector of saved FoodItem pointers.
     */
    std::vector<FoodItem*> getSavedItems() const;

    /**
     * @brief Check if the order has been modified.
     * 
     * @return true if the order has been modified, false otherwise.
     */
    bool isModified() const;
  
};

#endif
