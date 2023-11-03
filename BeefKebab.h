#ifndef BEEFKEBAB_H
#define BEEFKEBAB_H

#include <string>
#include "StarterMeal.h"

using namespace std;

class BeefKebab : public StarterMeal {
    public:
        void create();
        virtual string getName();
};
#endif