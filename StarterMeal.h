#ifndef STARTERMEAL_H
#define STARTERMEAL_H

#include <string>
#include "Meal.h"

using namespace std;

/**
 * @brief The StarterMeal class is a derived class of the Meal class.
 * 
 */
class StarterMeal : public Meal {
    public:
        /**
         * @brief This function creates a StarterMeal object.
         * 
         */
        void create();
        /**
         * @brief This function returns the name of the StarterMeal object.
         * 
         * @return string 
         */
        virtual string getName() = 0;
};
#endif