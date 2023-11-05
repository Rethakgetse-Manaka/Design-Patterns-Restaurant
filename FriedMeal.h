/**
 * @file FriedMeal.h
 * @brief Header file for the FriedMeal class.
 * 
 * This file contains the declaration of the FriedMeal class, which is a derived class of MainMeal.
 * The FriedMeal class represents a main meal that is fried.
 */
#ifndef FRIEDMEAL_H
#define FRIEDMEAL_H

#include <string>
#include "MainMeal.h"

using namespace std;

class FriedMeal : public MainMeal {
    public:
        /**
         * @brief Creates a new instance of FriedMeal.
         * 
         * This function creates a new instance of FriedMeal and initializes its properties.
         */
        void create();

        /**
         * @brief Gets the name of the FriedMeal.
         * 
         * This function returns the name of the FriedMeal.
         * 
         * @return The name of the FriedMeal.
         */
        virtual string getName();
};
#endif