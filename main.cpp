#include <iostream>
#include "Order.h"
#include "FoodItem.h"
#include "StoredOrder.h"

void displayItems(const std::vector<FoodItem*>& items, const std::string& heading) {
    std::cout << heading << std::endl;
    std::cout << "----------------------" << std::endl;
    for (const FoodItem* item : items) 
    {
        std::cout << item->getItemName() << " (R" << item->getPrice() << ")" << std::endl;
    }
    std::cout << "----------------------" << std::endl;
}

int main() {
    // Create an order
    Order order;
    StoredOrder storedOrder;

    // Add some items for the original order
    FoodItem item1(60.0, "Burger");
    FoodItem item2(30.0, "Fries");
    order.addItem(&item1);
    order.addItem(&item2);

    // Display the original items
    displayItems(order.getItems(), "<The Original order>");

    // Memento creation of the original order
    OrderMemento* memento = order.createMemento();
    storedOrder.storeMemento(memento);

    // Add more items to the order
    FoodItem item3(50.0, "Rum and Coke");
    FoodItem item4(75.0, "Pizza");
    order.addItem(&item3);
    order.addItem(&item4);

    // Display the items after adding
    displayItems(order.getItems(), "<Modified Order After Additions>");

    // Remove an item from the order (Burger)
    order.removeItem(&item1);

    // Display the modified order after removal
    displayItems(order.getItems(), "<Modified Order After Removal>");

    // Retrieve the stored memento and restore the original order
    memento = storedOrder.retrieveMemento(0);
    if (memento) {
        order.restoreFromMemento(memento);
        displayItems(order.getItems(), "<Restoring Original Order>");
    } else {
        std::cout << "No memento found for Original order." << std::endl;
    }

    return 0;
}
