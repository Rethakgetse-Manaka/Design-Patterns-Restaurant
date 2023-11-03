#ifndef GRILLCHEF_H
#define GRILLCHEF_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "BeefKebab.h"
#include "BeefBurger.h"

using namespace std;

class GrillChef : public Chef {
    public:
        Meal* createStarter();
        Meal* createMain();
        void addMeal(Meal* meal);
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
};
#endif