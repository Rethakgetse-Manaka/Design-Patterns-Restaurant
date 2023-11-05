/**
 * @file BeefKebab.h
 * @brief Header file for the BeefKebab class, a derived class of StarterMeal.
 */

#ifndef BEEFKEBAB_H
#define BEEFKEBAB_H

#include <string>
#include "StarterMeal.h"

using namespace std;

class BeefKebab : public StarterMeal {
    public:
        /**
         * @brief Creates a BeefKebab object.
         */
        void create();

        /**
         * @brief Returns the name of the BeefKebab object.
         * @return string The name of the BeefKebab object.
         */
        virtual string getName();
};
#endif