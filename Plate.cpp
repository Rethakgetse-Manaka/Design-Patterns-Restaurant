#include "Plate.h"
#include <iostream>
/**
 * @brief Construct a Plate object with an initial capacity for food items.
 *
 * @param NoOfFoods The initial capacity for food items in the plate.
 */
Plate::Plate(int c, int p) {
    m_Meals = std::vector<std::string*>();
    customerID = c;
    plateID = p;
}


/**
 * @brief Add a food item to the plate.
 *
 * @param item The name of the food item to add.
 */
void Plate::addMeal(std::string* item) {
    m_Meals.push_back(item);
}

/**
 * @brief Remove a specific food item from the plate.
 *
 * @param item The name of the food item to remove.
 */
void Plate::removeMeal(std::string* item) {
    for (int i = 0; i < m_Meals.size(); i++) {
        if (m_Meals[i] == item) {
            m_Meals.erase(m_Meals.begin() + i);
        }
    }
}

/**
 * @brief Get a reference to the vector of food items on the plate.
 *
 * @return A reference to the vector of food items.
 */
std::vector<std::string*>& Plate::getMeals() {
    return m_Meals;
}
void Plate::showMeals(){
    for (int i = 0; i < m_Meals.size(); i++) {
        std::cout << m_Meals[i]->getName() << " "; 
    }
    std::cout << std::endl;
}

int Plate::getPlateID()
{
    return plateID;
}

int Plate::getCustomerID()
{
    return customerID;
}
/**
 * @brief
 *
 */
Plate::~Plate() {
    if(!m_Meals.empty()){
        for (int i = 0; i < m_Meals.size(); i++) {
            delete m_Meals[i];
        }
    }
}
