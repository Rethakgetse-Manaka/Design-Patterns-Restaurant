#ifndef VEGETABLECHEF_H
#define VEGETABLECHEF_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "GreenSalad.h"
#include "StirFry.h"

using namespace std;

/**
 * @brief A class representing a vegetable chef that inherits from Chef.
 * 
 */
class VegetableChef : public Chef {
    public:
        /**
         * @brief Creates a starter meal.
         * 
         * @return Meal* A pointer to the created starter meal.
         */
        Meal* createStarter();

        /**
         * @brief Creates a main meal.
         * 
         * @return Meal* A pointer to the created main meal.
         */
        Meal* createMain();

        /**
         * @brief Adds a meal to the chef's list of meals.
         * 
         * @param meal A pointer to the meal to be added.
         */
        void addMeal(Meal* meal);

        /**
         * @brief Receives an order for a food item.
         * 
         * @param foodItem A pointer to the food item being ordered.
         * @param tableNumber The table number the order is for.
         * @param custID The ID of the customer placing the order.
         * @param numOfItems The number of items being ordered.
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
};
#endif