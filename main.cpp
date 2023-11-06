#include "Plate.h"
#include <iostream>

int main() {
    // Create a Plate object
    Plate plate(123, 456); // You can provide customerID and plateID as arguments

    // Add some food items to the plate
    plate.addMeal("Pizza");
    plate.addMeal("Burger");
    plate.addMeal("Salad");

    // Display the food items on the plate
    std::cout << "Food items on the plate: ";
    plate.showMeals();

    // Remove a food item
    plate.removeMeal("Burger");
    plate.removeMeal("Salad");

    // Display the updated food items
    std::cout << "Food items on the plate after removing 'Burger': ";
    plate.showMeals();

    // Get customerID and plateID
    int customerID = plate.getCustomerID();
    int plateID = plate.getPlateID();

    std::cout << "Customer ID: " << customerID << std::endl;
    std::cout << "Plate ID: " << plateID << std::endl;

    return 0;
}
