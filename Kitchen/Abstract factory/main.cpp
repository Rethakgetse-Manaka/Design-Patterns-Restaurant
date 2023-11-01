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
    Plate* plate = new Plate(5);
    for (int i = 0; i < 5; i++) {
        chefs[i]->setPlate(plate);
        Meal* starter = chefs[i]->createStarter();
        Meal* main = chefs[i]->createMain();
        starter->create();
        main->create();
        delete starter;
        delete main;
    }
    for (int i = 0; i < 5; i++) {
        delete chefs[i];
    }
    delete plate;
    return 0;
}