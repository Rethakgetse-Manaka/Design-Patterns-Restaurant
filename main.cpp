#include <iostream>
#include "Order.h"
#include "OrderMemento.h"
#include "StoredOrder.h"
#include "FoodItem.h"

void testOrder() {
    // Create an order
    Order order;
    FoodItem item1(10.0, "Pizza");
    FoodItem item2(5.0, "Burger");

    // Add items to the order
    order.addItem(&item1);
    order.addItem(&item2);

    // Create an order memento
    OrderMemento* memento = order.createMemento();
    // Check if the order is modified
    if (memento->isModified()) {
        std::cout << "testOrder: Order is modified." << std::endl;
    } else {
        std::cout << "testOrder: Order is not modified." << std::endl;
    }

    // Display the items in the order
    const std::vector<FoodItem*>& items = order.getItems();
    std::cout << "testOrder: Order items:" << std::endl;
    for (const FoodItem* item : items) {
        std::cout << " - " << item->getItemName() << " (Price: " << item->getPrice() << ")" << std::endl;
    }

    // Restore the order from the memento
    order.restoreFromMemento(memento);
    // Check if the order is restored to the original state
    if (!memento->isModified()) {
        std::cout << "testOrder: Order is restored from the original state." << std::endl;
    } else {
        std::cout << "testOrder: Order is restored from the modified state." << std::endl;
    }
    delete memento; // Don't forget to delete the memento
}

void testStoredOrder() {
    // Create a stored order
    StoredOrder storedOrder;
    Order order;
    FoodItem item(15.0, "Salad");

    // Add items to the order
    order.addItem(&item);

    // Create an order memento
    OrderMemento* memento = order.createMemento();

    // Store the memento in the stored order
    storedOrder.storeMemento(memento);

    // Retrieve the memento from the stored order
    OrderMemento* retrievedMemento = storedOrder.retrieveMemento(0);

    // Check if the retrieved memento is the same as the original memento
    if (memento == retrievedMemento) {
        std::cout << "testStoredOrder: Retrieved memento is the same as the original memento." << std::endl;
    } else {
        std::cout << "testStoredOrder: Retrieved memento is not the same as the original memento." << std::endl;
    }
}

int main() {
    testOrder();
    testStoredOrder();

    return 0;
}
