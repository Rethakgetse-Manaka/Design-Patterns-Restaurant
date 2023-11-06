#ifndef Plate_h
#define Plate_h

#include <vector>
/**
 * @class Plate
 * @brief Represents a plate with a list of food items.
 */
class Plate {
    private:
        std::vector<std::string> m_Meals; /**< A vector to store food items. */
        int customerID;
        int plateID;

    public:
        /**
         * @brief Default constructor for the Plate class.
         */
        Plate(int c, int p);

        /**
         * @brief Add a food item to the plate.
         * @param item The name of the food item to add.
         */
        void addMeal(std::string item);

        /**
         * @brief Remove a specific food item from the plate.
         * @param item The name of the food item to remove.
         */
        void removeMeal(std::string item);

        /**
         * @brief Get a pointer to the array of food items on the plate.
         * @return A pointer to the array of food items.
         */
        std::vector<std::string>& getMeals();

        /**
         * @brief Destructor for the Plate class.
         */
        void showMeals();

        int getCustomerID();
        int getPlateID();

        ~Plate();
};

#endif /* Plate_h */
