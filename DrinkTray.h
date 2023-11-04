
#ifndef DRINKTRAY_H
#define DRINKTRAY_H
#include "Cocktail.h"
#include "SpecificCocktail.h"
class Meal;
#include <vector>
class DrinkTray
{
   
    
    private:
        std::vector<Cocktail*> m_Drinks; 
        int tableNumber;
        int customerID;
    public:
        
        DrinkTray();

       
        void addDrink(Cocktail* item);

        void setTableNumber(int tableNum);
        void setCustomerID(int id);

        
        // void removeDrink(Meal* item);

        
        std::vector<Cocktail*>& getDrinks();

        
        // void showMeals();
        int getTableNumber();
        int getCustomerID();
        virtual ~DrinkTray();
};

#endif