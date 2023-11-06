#ifndef BEEFBURGER_H
#define BEEFBURGER_H

#include <string>
#include "MainMeal.h"

using namespace std;

/**
 * @brief The BeefBurger class is a derived class of MainMeal that represents a beef burger.
 * 
 */
class BeefBurger : public MainMeal {
    public:
        /**
         * @brief Creates the beef burger.
         * 
         */
        void create();

        /**
         * @brief Returns the name of the beef burger.
         * 
         * @return string The name of the beef burger.
         */
        virtual string getName();
};
#endif