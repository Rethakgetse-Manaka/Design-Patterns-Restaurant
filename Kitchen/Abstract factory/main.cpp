#include "Chef.h"
#include "Meal.h"
#include "VegetableChef.h"
#include "FryCook.h"    
#include "PastaChef.h"
#include "RotisseurChef.h"
#include "GrillChef.h"

#include <iostream>

int main() {
    Chef* chefs[] = { new VegetableChef, new FryCook, new PastaChef, new RotisseurChef, new GrillChef };
    Plate* plate = new Plate();

    for (int i = 0; i < 5; i++) {
        chefs[i]->setPlate(plate);
        Meal* starter = chefs[i]->createStarter();
        Meal* mainCourse = chefs[i]->createMain();

        plate->addMeal(starter);
        plate->addMeal(mainCourse);
        starter->create();
        mainCourse->create();

        std::cout << "Chef " << i + 1 << " created and added meals to the plate:" << std::endl;
        std::cout << "Starter: " << starter->getName() << std::endl;
        std::cout << "Main Course
        : " << mainCourse->getName() << std::endl;
    }

    std::cout << "Meals on the plate:" << std::endl;
    plate->showMeals();

    for (int i = 0; i < 5; i++) {
        delete chefs[i];
    }

    delete plate;

    return 0;
}