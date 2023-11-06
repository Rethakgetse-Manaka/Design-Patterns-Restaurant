#include <iostream>
// #include <gtest/gtest.h>
#include "Plate.h"
#include "Meal.h"

int main() {
    // Create a Plate with an initial capacity for food items (meals)
    Plate plate(5);

    // Create some Meal objects
    Meal meal1("Breakfast");
    Meal meal2("Lunch");
    Meal meal3("Dinner");

    // Add meals to the plate
    plate.addMeal(meal1);
    plate.addMeal(meal2);
    plate.addMeal(meal3);

    // Display the meals on the plate
    std::cout << "Meals on the plate: ";
    for (const Meal& meal : plate.getMeals()) {
        std::cout << meal.getName() << " ";
    }
    std::cout << std::endl;

    // Remove a meal from the plate
    plate.removeMeal(meal2);

    // Display the updated meals on the plate
    std::cout << "Updated meals on the plate: ";
    for (const Meal& meal : plate.getMeals()) {
        std::cout << meal.getName() << " ";
    }
    std::cout << std::endl;

    return 0;
}