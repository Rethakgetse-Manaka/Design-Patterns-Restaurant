#ifndef ROTISSEURCHEF_H
#define ROTISSEURCHEF_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "ChickenSalad.h"
#include "ChickenBurger.h"

using namespace std;

/**
 * @brief A class representing a Rotisseur Chef, which is a type of Chef that specializes in creating starters and mains.
 */
class RotisseurChef : public Chef {
    public:
        /**
         * @brief Creates a starter meal.
         * @return A pointer to the created starter meal.
         */
        Meal* createStarter();

        /**
         * @brief Creates a main meal.
         * @return A pointer to the created main meal.
         */
        Meal* createMain();

        /**
         * @brief Adds a meal to the chef's list of meals.
         * @param meal A pointer to the meal to be added.
         */
        void addMeal(Meal* meal);

        /**
         * @brief Receives an order for a food item.
         * @param foodItem A pointer to the food item being ordered.
         * @param tableNumber The number of the table the order is for.
         * @param custID The ID of the customer placing the order.
         * @param numOfItems The number of items being ordered.
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
};
#endif