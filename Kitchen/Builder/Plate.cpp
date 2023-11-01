#include "Plate.h"
/**
 * @brief Construct a Plate object with an initial capacity for food items.
 *
 * @param NoOfFoods The initial capacity for food items in the plate.
 */
Plate::Plate(int NoOfFoods) {
    m_Meals = std::vector<Meal*>(NoOfFoods);
}

/**
 * @brief Add a food item to the plate.
 *
 * @param item The name of the food item to add.
 */
void Plate::addMeal(Meal* item) {
    m_Meals.push_back(item);
}

/**
 * @brief Remove a specific food item from the plate.
 *
 * @param item The name of the food item to remove.
 */
void Plate::removeMeal(Meal* item) {
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
std::vector<Meal*>& Plate::getMeals() {
    return m_Meals;
}
/**
 * @brief 
 * 
 */
Plate::~Plate() {
    if(m_Meals.size() != 0){
        for (int i = 0; i < m_Meals.size(); i++) {
            delete m_Meals[i];
        }
    }
}
