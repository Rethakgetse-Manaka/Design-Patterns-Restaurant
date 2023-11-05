#ifndef RAMEN_H
#define RAMEN_H

#include <string>
#include "StarterMeal.h"

using namespace std;

/**
 * @brief The Ramen class is a derived class of StarterMeal.
 * 
 */
class Ramen : public StarterMeal {
    public:
        /**
         * @brief Creates a Ramen object.
         * 
         */
        void create();

        /**
         * @brief Returns the name of the Ramen object.
         * 
         * @return string 
         */
        virtual string getName();
};
#endif