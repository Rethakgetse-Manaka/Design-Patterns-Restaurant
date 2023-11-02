#include "ValetFactoryImpl.h"
#include <iostream>

int main() {
    std::cout << "Welcome to Patterning The Patterns Cuisine!" << std::endl;

    // Prompt user for valet service
    std::cout << "Do you want to use the valet service? (y/n): ";
    char response;
    std::cin >> response;

    if (response == 'y' || response == 'Y') {
        ValetFactoryImpl factory;
        ValetService* valet = factory.createValet();

        std::cout << "Using valet service..." << std::endl;
        valet->parkVehicle();
         std::cout << "You will be seated shortly . We hope you enjoy your night!" << std::endl;
        //valet->returnVehicle();
        //delete valet;
    } else {
        std::cout << "You will be seated shortly . We hope you enjoy your night!" << std::endl;
    }

    return 0;
}
