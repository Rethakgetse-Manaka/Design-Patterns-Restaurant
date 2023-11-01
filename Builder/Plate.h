#ifndef Plate_h
#define Plate_h

#include <string>
#include <vector>
/**
 * @class Plate
 * @brief Represents a plate with a list of food items.
 */
class Plate {
    private:
        std::vector<std::string> m_foodItems; /**< A vector to store food items. */

    public:
        /**
         * @brief Default constructor for the Plate class.
         */
        Plate(int NoOfFoods);

        /**
         * @brief Add a food item to the plate.
         * @param item The name of the food item to add.
         */
        void addFoodItem(std::string& item);

        /**
         * @brief Remove a specific food item from the plate.
         * @param item The name of the food item to remove.
         */
        void removeFoodItem(std::string& item);

        /**
         * @brief Get a pointer to the array of food items on the plate.
         * @return A pointer to the array of food items.
         */
        std::vector<std::string>& getFoodItems();

        /**
         * @brief Destructor for the Plate class.
         */
        ~Plate();
};

#endif /* Plate_h */
