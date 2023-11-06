
#ifndef DRINKTRAY_H
#define DRINKTRAY_H

#include "Cocktail.h"
#include "SpecificCocktail.h"
class Meal;

#include <vector>

class DrinkTray
{
    private:
        std::vector<Cocktail*> m_Drinks; // A vector of pointers to Cocktail objects representing the drinks on the tray
        int tableNumber; // An integer representing the table number associated with the tray
        int customerID; // An integer representing the customer ID associated with the tray
    public:
        DrinkTray(); // Default constructor

        void addDrink(Cocktail* item); // Adds a Cocktail object to the tray

        void setTableNumber(int tableNum); // Sets the table number associated with the tray
        void setCustomerID(int id); // Sets the customer ID associated with the tray

        std::vector<Cocktail*>& getDrinks(); // Returns a reference to the vector of drinks on the tray

        int getTableNumber(); // Returns the table number associated with the tray
        int getCustomerID(); // Returns the customer ID associated with the tray

        virtual ~DrinkTray(); // Virtual destructor
};

#endif
