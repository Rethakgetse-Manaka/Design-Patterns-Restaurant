#include "ValletHandler.h"

using namespace std;

ValletHandler::ValletHandler(/* args */)
{
}

void ValletHandler::valletRequest(Customer* customer)
{
    std::cout << "---Welcome to Patterning The Patterns Cuisine!---" << std::endl << std::endl;

    // Prompt user for valet service
    std::cout << " Do you want to use the valet service? (y/n): " << endl;
    char response;
    std::cin >> response;
    const std::string RED_COLOR = "\x1B[31m";
    const std::string GREEN_COLOR = "\x1B[32m";
    const std::string RESET_COLOR = "\x1B[0m";
    while (response != 'y' && response != 'Y' && response != 'n' && response != 'N')
    {
        std::cout << RED_COLOR << " Invalid response. Please enter 'y' or 'n': " << RESET_COLOR << endl;
        std::cin >> response;
    }
    
    if (response == 'y' || response == 'Y') {
        // Create a Customer object and set a customer ID

        ValetFactoryImpl factory;
        ValetService* valet = factory.createValet(customer, customer->getCustomerID());

        std::cout << "Using valet service..." << std::endl;
        sleep(1);
        valet->parkVehicle(customer, customer->getCustomerID());
        std::cout << "You will be seated shortly. We hope you enjoy your night! :)" << std::endl;
        sleep(1);
        //valet->returnVehicle(customer, customer->getCustomerID());
        // Don't forget to delete valet when you're done.
        delete valet;
    } else {
        std::cout << "You will be seated shortly. We hope you enjoy your night!" << std::endl << std::endl;
        sleep(1);
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