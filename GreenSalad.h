/**
 * @brief Header file for the GreenSalad class, which is a subclass of StarterMeal.
 * 
 */

#ifndef GREENSALAD_H
#define GREENSALAD_H

#include <string>
#include "StarterMeal.h"

using namespace std;

class GreenSalad : public StarterMeal {
    public:
        /**
         * @brief Creates a GreenSalad object.
         * 
         */
        void create();

        /**
         * @brief Returns the name of the GreenSalad object.
         * 
         * @return string 
         */
        virtual string getName();
};
#endif