#ifndef STIRFRY_H
#define STIRFRY_H

#include <string>
#include "MainMeal.h"

using namespace std;

/**
 * @brief A class representing a Stir Fry main meal.
 * 
 * This class inherits from the MainMeal class and implements the create and getName methods.
 */
class StirFry : public MainMeal {
    public:
        void create();
        virtual string getName();
};
#endif