#ifndef DRINKTRAY_H
#define DRINKTRAY_H
#include "Cocktail.h"
#include "SpecificCocktail.h"
class Meal;
#include <vector>
/**
 * @brief The DrinkTray class represents a tray that holds cocktails for a customer at a table.
 * 
 */
class DrinkTray{
    private:
        std::vector<Cocktail*> m_Drinks; ///< A vector of pointers to Cocktail objects representing the drinks on the tray.
        int tableNumber; ///< An integer representing the table number where the tray is located.
        int customerID; ///< An integer representing the ID of the customer who ordered the drinks.
    public:
        
        /**
         * @brief Construct a new Drink Tray object
         * 
         */
        DrinkTray();

       
        /**
         * @brief Adds a Cocktail object to the tray.
         * 
         * @param item A pointer to the Cocktail object to be added.
         */
        void addDrink(Cocktail* item);

        /**
         * @brief Sets the table number where the tray is located.
         * 
         * @param tableNum An integer representing the table number.
         */
        void setTableNumber(int tableNum);

        /**
         * @brief Sets the ID of the customer who ordered the drinks.
         * 
         * @param id An integer representing the customer ID.
         */
        void setCustomerID(int id);

        
        // void removeDrink(Meal* item);

        
        /**
         * @brief Returns a reference to the vector of pointers to Cocktail objects representing the drinks on the tray.
         * 
         * @return std::vector<Cocktail*>& A reference to the vector of pointers to Cocktail objects.
         */
        std::vector<Cocktail*>& getDrinks();

        
        // void showMeals();

        /**
         * @brief Returns the table number where the tray is located.
         * 
         * @return int An integer representing the table number.
         */
        int getTableNumber();

        /**
         * @brief Returns the ID of the customer who ordered the drinks.
         * 
         * @return int An integer representing the customer ID.
         */
        int getCustomerID();

        /**
         * @brief Destroy the Drink Tray object
         * 
         */
        virtual ~DrinkTray();
};

#endif