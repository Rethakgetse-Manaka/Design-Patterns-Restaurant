#ifndef MAINMEAL_H
#define MAINMEAL_H

#include <string>
#include "Meal.h"

using namespace std;

class MainMeal : public Meal {
    public:
        void create();
        virtual string getName() = 0;
};
#endif