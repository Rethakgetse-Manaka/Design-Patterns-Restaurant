#ifndef FRYCOOK_H
#define FRYCOOK_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "Wings.h"
#include "FriedMeal.h"

using namespace std;

class FryCook : public Chef {
    public:
        FryCook();
        Meal* createStarter();
        Meal* createMain();
        void addMeal(Meal* meal);
        void setPlate(Plate* plate);
};
#endif