/**
 * @brief Header file for the ChickenSalad class, which is a derived class of StarterMeal.
 * 
 */
#ifndef CHICKENSALAD_H
#define CHICKENSALAD_H

#include <string>
#include "StarterMeal.h"

using namespace std;

class ChickenSalad : public StarterMeal {
    public:
        void create();
        virtual string getName();
};
#endif