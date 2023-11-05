#ifndef BARTENDER_H
#define BARTENDER_H

#include "Colleague.h"
#include "Cocktail.h"
#include "SpecificCocktail.h"
#include "CocktailDecorator.h"
#include "DrinkTray.h"
#include "OrderMediator.h"
// #include "RestaurantOrderMediator.h"

#include <iostream>
#include <unistd.h> 

using namespace std;

/**
 * @brief The Bartender class is a concrete Colleague in the Mediator design pattern.
 * 
 * It is responsible for creating and adding drinks to the DrinkTray, as well as receiving orders from the OrderMediator.
 */
class Bartender : public Colleague {
    private:
    DrinkTray* tray;

    public:
    /**
     * @brief Adds a Cocktail to the DrinkTray.
     * 
     * @param cocktail The Cocktail to add to the DrinkTray.
     */
    void addDrink(Cocktail* cocktail);

    /**
     * @brief Sets the DrinkTray for the Bartender to use.
     * 
     * @param tray The DrinkTray to set.
     */
    void setTray(DrinkTray* tray);

    /**
     * @brief Receives an order from the OrderMediator and creates the specified Cocktail.
     * 
     * @param cocktail The Cocktail to create.
     * @param tableNumber The table number the order is for.
     * @param custID The ID of the customer who placed the order.
     * @param numOfItems The number of items in the order.
     */
    void receiveOrder(Cocktail* cocktail, int tableNumber, int custID, int numOfItems);
};
#endif