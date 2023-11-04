#include <iostream>
#include "Tab.h"
#include "TabMemento.h"
#include "Customer.h"
#include "CompositeBill.h"
#include "LeafBill.h"

int main() {
    // Create a CompositeBill using a pointer to manage multiple bills
    CompositeBill* compositeBill = new CompositeBill;

    // Create a few customers and their individual bills
    Customer customer1(1, "Customer 1");
    Customer customer2(2, "Customer 2");
    Customer customer3(3, "Customer 3");

    // Create individual bills for each customer using pointers and add them to the composite bill
    LeafBill* bill1 = new LeafBill(new Order(customer1.getCustomerID(), customer1.getCustomerName()), 10.0);
    LeafBill* bill2 = new LeafBill(new Order(customer2.getCustomerID(), customer2.getCustomerName()), 15.0);
    LeafBill* bill3 = new LeafBill(new Order(customer3.getCustomerID(), customer3.getCustomerName()), 20.0);

    compositeBill->addPerson(bill1);
    compositeBill->addPerson(bill2);
    compositeBill->addPerson(bill3);

    // Create a Tab and a TabMemento for each customer
    Tab tab1(1, "Customer 1's Tab", bill1);
    Tab tab2(2, "Customer 2's Tab", bill2);
    Tab tab3(3, "Customer 3's Tab", bill3);

    // Create mementos for each customer's tab
    tab1.createMemento();
    tab2.createMemento();
    tab3.createMemento();

    // Modify the Tab's state for each customer (e.g., change customer name)
    tab1.getCustomerName() = "Updated Customer 1's Tab";
    tab2.getCustomerName() = "Updated Customer 2's Tab";
    tab3.getCustomerName() = "Updated Customer 3's Tab";

    // Restore the Tab's state for each customer from their respective mementos
    TabMemento memento1 = tab1.getMemento();
    tab1.restoreMemento(memento1);
    memento1.printMemento();

    TabMemento memento2 = tab2.getMemento();
    tab2.restoreMemento(memento2);
     memento2.printMemento();

    TabMemento memento3 = tab3.getMemento();
    tab3.restoreMemento(memento3);
     memento3.printMemento();

    // Clean up memory (release dynamically allocated memory)
   // delete compositeBill;
    // delete bill1;
    // delete bill2;
    // delete bill3;

    return 0;
}
