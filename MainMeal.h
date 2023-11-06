#ifndef MAINMEAL_H
#define MAINMEAL_H

#include <string>
#include "Meal.h"

using namespace std;

/**
 * @brief The MainMeal class is a concrete class that inherits from the Meal class.
 * It provides an implementation for the create() method and declares a pure virtual function getName().
 */
class MainMeal : public Meal {
    public:
        /**
         * @brief This method creates a main meal by adding a main dish and two side dishes to the meal.
         */
        void create();
        /**
         * @brief This pure virtual method returns the name of the main meal.
         * @return string The name of the main meal.
         */
        virtual string getName() = 0;
};
#endif