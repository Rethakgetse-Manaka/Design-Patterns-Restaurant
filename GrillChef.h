#ifndef GRILLCHEF_H
#define GRILLCHEF_H

#include <string>
#include <iostream>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "BeefKebab.h"
#include "BeefBurger.h"

using namespace std;

/**
 * @brief The GrillChef class is a concrete class that inherits from the Chef abstract class.
 * 
 */
class GrillChef : public Chef {
    public:
        /**
         * @brief Creates a StarterMeal object.
         * 
         * @return Meal* 
         */
        Meal* createStarter();

        /**
         * @brief Creates a MainMeal object.
         * 
         * @return Meal* 
         */
        Meal* createMain();

        /**
         * @brief Adds a Meal object to the Chef's list of meals.
         * 
         * @param meal 
         */
        void addMeal(Meal* meal);

        /**
         * @brief Receives an order from the Waiter and prepares the food item.
         * 
         * @param foodItem 
         * @param tableNumber 
         * @param custID 
         * @param numOfItems 
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
};
#endif