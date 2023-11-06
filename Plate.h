
#ifndef Plate_H
#define Plate_H
class Meal;
//#include "Meal.h"
#include <vector>
class Plate
/**
 * @brief The Plate class represents a plate that can hold multiple meals for a customer at a table.
 * 
 */
 {
    private:
        std::vector<Meal*> m_Meals; ///< A vector of Meal pointers representing the meals on the plate.
        int tableNumber; ///< An integer representing the table number where the plate is located.
        int customerID; ///< An integer representing the ID of the customer who ordered the plate.

    public:
        /**
         * @brief Construct a new Plate object.
         * 
         */
        Plate();

        /**
         * @brief Add a meal to the plate.
         * 
         * @param item A pointer to the Meal object to be added.
         */
        void addMeal(Meal* item);

        /**
         * @brief Set the table number where the plate is located.
         * 
         * @param tableNum An integer representing the table number.
         */
        void setTableNumber(int tableNum);

        /**
         * @brief Set the ID of the customer who ordered the plate.
         * 
         * @param ID An integer representing the customer ID.
         */
        void setCustomerID(int ID);

        /**
         * @brief Remove a meal from the plate.
         * 
         * @param item A pointer to the Meal object to be removed.
         */
        void removeMeal(Meal* item);

        /**
         * @brief Get a reference to the vector of Meal pointers representing the meals on the plate.
         * 
         * @return std::vector<Meal*>& A reference to the vector of Meal pointers.
         */
        std::vector<Meal*>& getMeals();

        /**
         * @brief Display the meals on the plate.
         * 
         */
        void showMeals();

        /**
         * @brief Get the table number where the plate is located.
         * 
         * @return int An integer representing the table number.
         */
        int getTableNumber();

        /**
         * @brief Get the ID of the customer who ordered the plate.
         * 
         * @return int An integer representing the customer ID.
         */
        int getCustomerID();

        /**
         * @brief Destroy the Plate object.
         * 
         */
        virtual ~Plate();
};

#endif