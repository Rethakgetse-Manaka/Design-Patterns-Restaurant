#ifndef Order_H
#define Order_H
// Include the OrderMemento class
#include "OrderMemento.h" 
#include <string>
#include <vector>
#include "FoodItem.h"
// #include "SpecificCocktail.h"
// #include "BaseCocktail.h"



/**
 * @brief The Order class represents an order made by a customer in a restaurant.
 * 
 * The class contains a vector of FoodItem objects that represent the items ordered by the customer.
 * It also has methods to add and remove items from the order, as well as to create and restore from a memento.
 */
class Order {
    private:
        std::vector<FoodItem*> items; /**< A vector of FoodItem objects representing the items ordered by the customer. */
        bool isModified; /**< A boolean value indicating whether the order has been modified. */

    public:
        /**
         * @brief Default constructor for the Order class.
         */
        Order();

        /**
         * @brief Adds a FoodItem object to the order.
         * 
         * @param i A pointer to the FoodItem object to be added.
         */
        void addItem(FoodItem* i);

        /**
         * @brief Removes a FoodItem object from the order.
         * 
         * @param i A pointer to the FoodItem object to be removed.
         */
        void removeItem(FoodItem* i);

        /**
         * @brief Returns a constant reference to the vector of FoodItem objects representing the items ordered by the customer.
         * 
         * @return const std::vector<FoodItem*>& A constant reference to the vector of FoodItem objects representing the items ordered by the customer.
         */
        const std::vector<FoodItem*>& getItems() const;

        /**
         * @brief Creates a memento of the current state of the order.
         * 
         * @return OrderMemento* A pointer to the memento object created.
         */
        OrderMemento* createMemento();

        /**
         * @brief Modifies the order.
         */
        void modifyOrder();

        /**
         * @brief Cancels the order.
         */
        void cancelOrder();

        /**
         * @brief Restores the state of the order from a memento.
         * 
         * @param memento A pointer to the memento object to restore from.
         */
        void restoreFromMemento(OrderMemento* memento);
};

#endif