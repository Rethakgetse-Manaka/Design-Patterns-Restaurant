#ifndef RAMEN_H
#define RAMEN_H

#include <string>
#include "StarterMeal.h"

using namespace std;

class Ramen : public StarterMeal {
    public:
        void create();
        virtual string getName();
};
#endif