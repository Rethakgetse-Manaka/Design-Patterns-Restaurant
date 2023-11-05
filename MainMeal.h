/**
 * @brief The MainMeal class is a derived class of Meal and represents the main course of a meal.
 * 
 */
#ifndef MAINMEAL_H
#define MAINMEAL_H

#include <string>
#include "Meal.h"

using namespace std;

class MainMeal : public Meal {
    public:
        /**
         * @brief Creates a MainMeal object.
         * 
         */
        void create();
        /**
         * @brief Returns the name of the MainMeal object.
         * 
         * @return string 
         */
        virtual string getName() = 0;
};
#endif