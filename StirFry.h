/**
 * @brief Header file for the StirFry class, which is a subclass of MainMeal.
 * 
 */
#ifndef STIRFRY_H
#define STIRFRY_H

#include <string>
#include "MainMeal.h"

using namespace std;

class StirFry : public MainMeal {
    public:
        void create();
        virtual string getName();
};
#endif