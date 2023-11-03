#include "Table.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Table*> tables;
    for (int i = 1; i <= 5; ++i) {
        tables.push_back(new Table(i));
    }

    // Display the initial status of all tables
    std::cout << "Initial Table Status:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Table " << tables[i]->getTableNumber() << ": ";
        tables[i]->printTableStatus(); // Uses the getTableStatus function
    }

    // Loop through all tables and update their states
    for (int i = 0; i < 5; ++i) {
        int tableNumber;

        // Get user input for table number (1-5)
        std::cout << "Enter the table number (1-5): ";
        std::cin >> tableNumber;

        if (tableNumber < 1 || tableNumber > 5) {
            std::cout << "Invalid table number. Table number must be between 1 and 5." << std::endl;
            return 1;
        }

        // Set the state of the selected table to "Occupied"
        Table* table = tables[tableNumber - 1];
        table->occupyTable();

        // Ask the user for the next action (Combined, Split, or None)
        std::string action;

        std::cout << "Enter action (combine, split, free or none): ";
        std::cin >> action;

        if (action == "combine") 
        {
            table->combineTable();
        } else if (action == "split") 
        {
            table->splitTable();
        } 
        else if(action=="free")
        {
            table->freeTable();
        }else if (action != "none") 
        {
            std::cout << "Invalid action. Please enter 'combine', 'split', or 'none'.NB if a table is not combined, you cant split" << std::endl;
            return 1;
        }

       // Display the updated status of all tables
        std::cout << "Updated Table Status:" << std::endl;
        for (int j = 0; j < 5; ++j) {
            std::cout << "Table " << tables[j]->getTableNumber() << ": ";
            tables[j]->printTableStatus();
        }
    }

    // Don't forget to clean up the dynamically allocated memory
    for (int i = 0; i < 5; ++i) {
        delete tables[i];
    }

    return 0;
}
