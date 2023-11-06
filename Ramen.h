#ifndef RAMEN_H
#define RAMEN_H

#include <string>
#include "StarterMeal.h"

using namespace std;

/**
 * @brief The Ramen class is a concrete implementation of the StarterMeal abstract class.
 * 
 */
class Ramen : public StarterMeal {
    public:
        void create();
        virtual string getName();
};
#endif