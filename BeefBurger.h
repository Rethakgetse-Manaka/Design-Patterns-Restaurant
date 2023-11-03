#ifndef BEEFBURGER_H
#define BEEFBURGER_H

#include <string>
#include "MainMeal.h"

using namespace std;

class BeefBurger : public MainMeal {
    public:
        void create();
        virtual string getName();
};
#endif