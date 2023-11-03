#ifndef STARTERMEAL_H
#define STARTERMEAL_H

#include <string>
#include "Meal.h"

using namespace std;

class StarterMeal : public Meal {
    public:
        void create();
        virtual string getName() = 0;
};
#endif