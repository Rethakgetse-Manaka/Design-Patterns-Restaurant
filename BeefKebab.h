#ifndef BEEFKEBAB_H
#define BEEFKEBAB_H

#include <string>
#include "StarterMeal.h"

using namespace std;

/**
 * @brief The BeefKebab class is a derived class of StarterMeal.
 * 
 */
class BeefKebab : public StarterMeal {
    public:
        /**
         * @brief Creates a BeefKebab object.
         * 
         */
        void create();

        /**
         * @brief Returns the name of the BeefKebab object.
         * 
         * @return string 
         */
        virtual string getName();
};
#endif