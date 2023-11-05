#ifndef STARTERMEAL_H
#define STARTERMEAL_H

#include <string>
#include "Meal.h"

using namespace std;

/**
 * @brief The StarterMeal class is a concrete class that inherits from the Meal class.
 * 
 * It represents a starter meal and provides an interface for creating and getting the name of the meal.
 */
class StarterMeal : public Meal {
    public:
        /**
         * @brief Creates the starter meal.
         * 
         */
        void create();

        /**
         * @brief Gets the name of the starter meal.
         * 
         * @return string The name of the starter meal.
         */
        virtual string getName() = 0;
};
#endif