#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H

#include <string>
#include "MainMeal.h"

using namespace std;

/**
 * @brief The ChickenBurger class is a subclass of MainMeal that represents a chicken burger.
 * 
 */
class ChickenBurger : public MainMeal {
    public:
        /**
         * @brief Creates the chicken burger by adding the necessary ingredients.
         * 
         */
        void create();
        /**
         * @brief Returns the name of the chicken burger.
         * 
         * @return string The name of the chicken burger.
         */
        virtual string getName();
};
#endif