/**
 * @file RotisseurChef.h
 * @brief Header file for the RotisseurChef class.
 * 
 * This file contains the declaration of the RotisseurChef class, which is a derived class of Chef.
 * It declares the functions to create starter and main meals, add meals, and receive orders.
 */
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
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems);
};
#endif