/**
 * @file FryCook.h
 * @brief Header file for the FryCook class.
 * 
 * This file contains the declaration of the FryCook class, which is a derived class of Chef.
 * FryCook is responsible for creating starter and main meals, as well as adding meals to the order.
 * FryCook receives orders from customers and prepares the meals accordingly.
 */
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
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
        
};
#endif