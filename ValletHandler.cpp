#include "ValletHandler.h"

using namespace std;

ValletHandler::ValletHandler(/* args */)
{
}

void ValletHandler::valletRequest(Customer* customer)
{
    std::cout << "Welcome to Patterning The Patterns Cuisine!" << std::endl;

    // Prompt user for valet service
    std::cout << "Do you want to use the valet service? (y/n): ";
    char response;
    std::cin >> response;

    if (response == 'y' || response == 'Y') {
        // Create a Customer object and set a customer ID

        ValetFactoryImpl factory;
        ValetService* valet = factory.createValet(customer, customer->getCustomerID());

        std::cout << "Using valet service..." << std::endl;
        valet->parkVehicle(customer, customer->getCustomerID());
        std::cout << "You will be seated shortly. We hope you enjoy your night!" << std::endl;
        //valet->returnVehicle(customer, customer->getCustomerID());
        // Don't forget to delete valet when you're done.
        delete valet;
    } else {
        std::cout << "You will be seated shortly. We hope you enjoy your night!" << std::endl << std::endl;
    }
}

void ValletHandler::handleRequest(Customer* customer)
{
    valletRequest(customer);
    if(next != nullptr){
        next->handleRequest(customer);
    }
}

ValletHandler::~ValletHandler()
{
    // if(next != nullptr){
    //     delete next;
    // }
}