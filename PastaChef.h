/**
 * @file PastaChef.h
 * @brief Header file for the PastaChef class, which is a concrete implementation of the Chef abstract class.
 */

#ifndef PASTACHEF_H
#define PASTACHEF_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "Ramen.h"
#include "Alfredo.h"

using namespace std;

class PastaChef : public Chef {
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
         * @brief Adds a meal to the chef's list of prepared meals.
         * @param meal A pointer to the meal to be added.
         */
        void addMeal(Meal* meal);

        /**
         * @brief Receives an order for a food item and prepares the corresponding meal.
         * @param foodItem A pointer to the food item that was ordered.
         * @param tableNumber The number of the table that placed the order.
         * @param custID The ID of the customer who placed the order.
         * @param numOfItems The number of items ordered.
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
};
#endif