#include <iostream>
#include "Table.h"

void testFreeState() {
    Table table(1); // Create a table
    table.printTableStatus(); // Should print "Free"

    // Transition to Occupied
    table.occupyTable();
    table.printTableStatus(); // Should print "Occupied"

    // Transition to Combined
    table.combineTable();
    table.printTableStatus(); // Should print "Combined"

    // Transition to Split
    table.splitTable();
    table.printTableStatus(); // Should print "Split"

    // Transition back to Free
    table.freeTable();
    table.printTableStatus(); // Should print "Free"
}

void testOccupiedState() {
    Table table(2); // Create a table
    table.occupyTable();
    table.printTableStatus(); // Should print "Occupied"

    // Transition to Free
    table.freeTable();
    table.printTableStatus(); // Should print "Free"
}

void testCombinedState() {
    Table table(3); // Create a table
    table.combineTable();
    table.printTableStatus(); // Should print "Combined"

    // Transition to Split
    table.splitTable();
    table.printTableStatus(); // Should print "Split"
}

void testSplitState() {
    Table table(4); // Create a table
    table.splitTable();
    table.printTableStatus(); // Should print "Split"

    // Transition back to Free
    table.freeTable();
    table.printTableStatus(); // Should print "Free"
}

int main() {
    testFreeState();
    testOccupiedState();
    testCombinedState();
    testSplitState();

    return 0;
}
