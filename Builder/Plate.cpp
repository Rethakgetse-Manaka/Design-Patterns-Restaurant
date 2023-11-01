#include "Plate.h"

/**
 * @brief Construct a Plate object with an initial capacity for food items.
 *
 * @param NoOfFoods The initial capacity for food items in the plate.
 */
Plate::Plate(int NoOfFoods) {
    m_foodItems = std::vector<std::string>(NoOfFoods);
}

/**
 * @brief Add a food item to the plate.
 *
 * @param item The name of the food item to add.
 */
void Plate::addFoodItem(std::string& item) {
    m_foodItems.push_back(item);
}

/**
 * @brief Remove a specific food item from the plate.
 *
 * @param item The name of the food item to remove.
 */
void Plate::removeFoodItem(std::string& item) {
    for (int i = 0; i < m_foodItems.size(); i++) {
        if (m_foodItems[i] == item) {
            m_foodItems.erase(m_foodItems.begin() + i);
        }
    }
}

/**
 * @brief Get a reference to the vector of food items on the plate.
 *
 * @return A reference to the vector of food items.
 */
std::vector<std::string>& Plate::getFoodItems() {
    return m_foodItems;
}
