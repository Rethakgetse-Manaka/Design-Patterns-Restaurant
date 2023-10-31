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
        Meal* createStarter();
        Meal* createMain();
};
#endif