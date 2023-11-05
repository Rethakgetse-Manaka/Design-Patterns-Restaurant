#ifndef FRYCOOK_H
#define FRYCOOK_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "Wings.h"
#include "FriedMeal.h"

using namespace std;

/**
 * @brief The FryCook class is a derived class of Chef and is responsible for creating and adding fried meals to the order.
 * 
 */
class FryCook : public Chef {
    public:
        /**
         * @brief Construct a new Fry Cook object
         * 
         */
        FryCook();

        /**
         * @brief Creates a new StarterMeal object with Wings.
         * 
         * @return Meal* 
         */
        Meal* createStarter();

        /**
         * @brief Creates a new MainMeal object with FriedMeal.
         * 
         * @return Meal* 
         */
        Meal* createMain();

        /**
         * @brief Adds a meal to the order.
         * 
         * @param meal 
         */
        void addMeal(Meal* meal);

        /**
         * @brief Receives an order for a food item and adds it to the order.
         * 
         * @param foodItem 
         * @param tableNumber 
         * @param custID 
         * @param numOfItems 
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
        
};
#endif