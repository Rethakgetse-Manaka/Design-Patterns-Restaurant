#ifndef ALFREDO_H
#define ALFREDO_H

#include <string>
#include "MainMeal.h"

using namespace std;

/**
 * @brief The Alfredo class is a derived class of MainMeal that represents an Alfredo main meal.
 * 
 */
class Alfredo : public MainMeal {
    public:
        /**
         * @brief Creates an Alfredo main meal.
         * 
         */
        void create();
        
        /**
         * @brief Returns the name of the Alfredo main meal.
         * 
         * @return string 
         */
        virtual string getName();
};
#endif