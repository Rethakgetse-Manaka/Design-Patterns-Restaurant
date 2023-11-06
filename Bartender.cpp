#include "Bartender.h"

void Bartender::addDrink(Cocktail *cocktail)
{
    tray->addDrink(cocktail);
}

void Bartender::setTray(DrinkTray *tray)
{
    this->tray = tray;
}

void Bartender::receiveOrder(Cocktail* cocktail, int tableNumber, int custID, int numOfItems)
{
    cout << "Creating your Drinks..." << endl;
    sleep(1);
    cout << "Shaking..." << endl;
    sleep(1);
    cout << "Still shaking..." << endl;
    sleep(1);
    cout << "Drink is ready!" << endl;
    sleep(1);
    cout << endl;
    addDrink(cocktail);
    if((int) tray->getDrinks().size() == numOfItems)
    {
        mediator->notifyDrinksReady(tray);
    }
}
