#include "RestaurantOrderMediator.h"
#include "Waiter.h"
#include "GrillChef.h"
#include "FryCook.h"
#include "PastaChef.h"
#include "RotisseurChef.h"
#include "VegetableChef.h"
#include "FoodItem.h"
#include "Plate.h"
#include "BeefKebab.h"
#include "BeefBurger.h"
#include "Wings.h"
#include "FriedMeal.h"
#include "Ramen.h"
#include "Alfredo.h"
#include "ChickenSalad.h"
#include "ChickenBurger.h"
#include "GreenSalad.h"
#include "StirFry.h"

#include <iostream>

using namespace std;

int main() {
    cout << "all files compiled successfully" << endl;

    FoodItem* food1 = new FoodItem("Beef Burger", false, true, 79.95, true);
    FoodItem* food2 = new FoodItem("Beef Kebab", false, true, 99.95, true);
    FoodItem* food3 = new FoodItem("Chicken Burger", false, true, 69.95, true);
    FoodItem* food4 = new FoodItem("Chicken Salad", true, false, 59.95, true);

    Order* order1 = new Order()

    return 0;
}