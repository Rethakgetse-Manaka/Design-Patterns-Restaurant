#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H

#include <string>
#include "MainMeal.h"

using namespace std;

/**
 * @brief The ChickenBurger class is a concrete component of the MainMeal hierarchy.
 * 
 */
class ChickenBurger : public MainMeal {
    public:
        /**
         * @brief Construct a new ChickenBurger object
         * 
         */
        void create();
        /**
         * @brief Get the name of the ChickenBurger object
         * 
         * @return string 
         */
        virtual string getName();
};
#endif