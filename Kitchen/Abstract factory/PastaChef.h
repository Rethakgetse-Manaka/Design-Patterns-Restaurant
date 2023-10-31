#ifndef PASTACHEF_H
#define PASTACHEF_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "Ramen.h"
#include "Alfredo.h"

using namespace std;

class PastaChef : public Chef {
    public:
        Meal* createStarter();
        Meal* createMain();
};
#endif