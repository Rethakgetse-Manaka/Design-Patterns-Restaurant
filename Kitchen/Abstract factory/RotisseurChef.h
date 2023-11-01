#ifndef ROTISSEURCHEF_H
#define ROTISSEURCHEF_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "ChickenSalad.h"
#include "ChickenBurger.h"

using namespace std;

class RotisseurChef : public Chef {
    public:
        Meal* createStarter();
        Meal* createMain();
        void addMeal(Meal* meal);
        void setPlate(Plate* plate);
};
#endif