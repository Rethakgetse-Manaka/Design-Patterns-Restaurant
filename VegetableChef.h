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
 * @brief The VegetableChef class is a subclass of Chef that specializes in creating vegetarian meals.
 */
class VegetableChef : public Chef {
    public:
        /**
         * @brief Creates a starter meal.
         * @return A Meal object representing the starter.
         */
        Meal* createStarter();
        
        /**
         * @brief Creates a main course meal.
         * @return A Meal object representing the main course.
         */
        Meal* createMain();
        
        /**
         * @brief Adds a Meal object to the list of available meals.
         * @param meal A pointer to the Meal object to be added.
         */
        void addMeal(Meal* meal);
        
        /**
         * @brief Receives an order for a FoodItem and creates the corresponding Meal object.
         * @param foodItem A pointer to the FoodItem object representing the order.
         * @param tableNumber An integer representing the table number the order is for.
         * @param custID An integer representing the customer ID.
         * @param numOfItems An integer representing the number of items ordered.
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
};
#endif