#ifndef ALFREDO_H
#define ALFREDO_H

#include <string>
#include "MainMeal.h"

using namespace std;

/**
 * @brief The Alfredo class is a derived class of MainMeal that represents an Alfredo pasta dish.
 * 
 */
class Alfredo : public MainMeal {
    public:
        /**
         * @brief Creates the Alfredo pasta dish.
         * 
         */
        void create();

        /**
         * @brief Returns the name of the Alfredo pasta dish.
         * 
         * @return string 
         */
        virtual string getName();
};
#endif