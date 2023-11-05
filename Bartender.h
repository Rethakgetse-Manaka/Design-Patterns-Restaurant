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

class Bartender : public Colleague {
    private:
    DrinkTray* tray;

    public:
    // void createCocktail(Cocktail* cocktail);
    void addDrink(Cocktail* cocktail);
    void setTray(DrinkTray* tray);
    void receiveOrder(Cocktail* cocktail, int tableNumber, int custID, int numOfItems);
};
#endif