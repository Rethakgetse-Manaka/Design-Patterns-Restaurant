/**
 * @brief Header file for the FriedMeal class, which is a subclass of MainMeal.
 * 
 */
#ifndef FRIEDMEAL_H
#define FRIEDMEAL_H

#include <string>
#include "MainMeal.h"

using namespace std;

class FriedMeal : public MainMeal {
    public:
        void create();
        virtual string getName();
};
#endif