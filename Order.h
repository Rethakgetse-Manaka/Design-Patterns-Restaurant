#ifndef Order_H
#define Order_H
#include "FoodItem.h"
// Include the OrderMemento class
#include "OrderMemento.h" 
#include <vector>

class Waiter;
class StoredOrder;
class Order
{
    //added for memento
    private:
    std::vector<FoodItem*> items;
    bool isModified;
   

    public:
        int tableNumber;
        Waiter* waiter;
        std::string custId;
        Order();
        void addItem(FoodItem* i);
        void removeItem(FoodItem* i);
        // Add a method to access items
        const std::vector<FoodItem*>& getItems() const;
       //added
        OrderMemento* createMemento();
        void modifyOrder();
        void cancelOrder();
        void restoreFromMemento(OrderMemento* memento);
       
};
#endif