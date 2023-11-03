#ifndef ALFREDO_H
#define ALFREDO_H

#include <string>
#include "MainMeal.h"

using namespace std;

class Alfredo : public MainMeal {
    public:
        void create();
        virtual string getName();
};
#endif