#include <iostream>
#include "Tab.h"
#include "TabMemento.h"
#include "TabCaretaker.h"
#include "Bill.h"
#include "CompositeBill.h"
#include "LeafBill.h"

void testTab() {
    // Create a sample bill
    Bill* sampleBill = new CompositeBill();
    int customerID = 1;
    std::string customerName = "John";
    Tab tab(customerID, customerName, sampleBill);

    // Test getters
    if (tab.getCustomerID() == customerID) {
        std::cout << "testTab: CustomerID test passed." << std::endl;
    } else {
        std::cout << "testTab: CustomerID test failed." << std::endl;
    }

    if (tab.getCustomerName() == customerName) {
        std::cout << "testTab: CustomerName test passed." << std::endl;
    } else {
        std::cout << "testTab: CustomerName test failed." << std::endl;
    }

    // You can test more functionality here

    delete sampleBill;
}

void testTabMemento() {
    // Create a sample bill
    Bill* sampleBill = new LeafBill(nullptr, 10.0);
    int customerID = 1;
    std::string customerName = "John";
    TabMemento memento(customerID, customerName, sampleBill);

    // Test getters
    if (memento.getCustomerID() == customerID) {
        std::cout << "testTabMemento: CustomerID test passed." << std::endl;
    } else {
        std::cout << "testTabMemento: CustomerID test failed." << std::endl;
    }

    if (memento.getCustomerName() == customerName) {
        std::cout << "testTabMemento: CustomerName test passed." << std::endl;
    } else {
        std::cout << "testTabMemento: CustomerName test failed." << std::endl;
    }

    // You can test more functionality here

    delete sampleBill;
}

void testTabCaretaker() {
    // Create a caretaker
    TabCaretaker caretaker;

    // Create some mementos
    Bill* sampleBill1 = new CompositeBill();
    Bill* sampleBill2 = new LeafBill(nullptr, 15.0);

    TabMemento memento1(1, "John", sampleBill1);
    TabMemento memento2(2, "Jane", sampleBill2);

    // Add mementos to the caretaker
    caretaker.addMemento(memento1);
    caretaker.addMemento(memento2);

    // Test getMementoCount
    if (caretaker.getMementoCount() == 2) {
        std::cout << "testTabCaretaker: getMementoCount test passed." << std::endl;
    } else {
        std::cout << "testTabCaretaker: getMementoCount test failed." << std::endl;
    }

    // Test getMemento
    TabMemento retrievedMemento = caretaker.getMemento(1);
    if (retrievedMemento.getCustomerID() == 2) {
        std::cout << "testTabCaretaker: getMemento test passed." << std::endl;
    } else {
        std::cout << "testTabCaretaker: getMemento test failed." << std::endl;
    }

    // You can test more functionality here

    delete sampleBill1;
    delete sampleBill2;
}

int main() {
    testTab();
    testTabMemento();
    testTabCaretaker();

    return 0;
}
