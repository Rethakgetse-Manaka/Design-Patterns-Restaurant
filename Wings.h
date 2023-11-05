#ifndef WINGS_H
#define WINGS_H

#include <string>
#include "StarterMeal.h"

using namespace std;

/**
 * @brief The Wings class represents a starter meal consisting of wings.
 * 
 * This class inherits from the StarterMeal class and implements the create and getName methods.
 */
class Wings : public StarterMeal {
    public:
        void create();
        virtual string getName();
};
#endif