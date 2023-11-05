
#ifndef Plate_H
#define Plate_H
class Meal;
#include <vector>

/**
 * @brief The Plate class represents a plate that can hold multiple meals for a customer at a specific table.
 * 
 */
class Plate{
    private:
        std::vector<Meal*> m_Meals; ///< A vector of Meal pointers that holds the meals on the plate.
        int tableNumber; ///< An integer representing the table number where the plate is located.
        int customerID; ///< An integer representing the ID of the customer who ordered the plate.

    public:
        /**
         * @brief Construct a new Plate object.
         * 
         */
        Plate();

        /**
         * @brief Adds a meal to the plate.
         * 
         * @param item A pointer to the Meal object to be added.
         */
        void addMeal(Meal* item);

        /**
         * @brief Sets the table number for the plate.
         * 
         * @param tableNum An integer representing the table number.
         */
        void setTableNumber(int tableNum);

        /**
         * @brief Sets the customer ID for the plate.
         * 
         * @param ID An integer representing the customer ID.
         */
        void setCustomerID(int ID);

        /**
         * @brief Removes a meal from the plate.
         * 
         * @param item A pointer to the Meal object to be removed.
         */
        void removeMeal(Meal* item);

        /**
         * @brief Returns a reference to the vector of Meal pointers on the plate.
         * 
         * @return std::vector<Meal*>& A reference to the vector of Meal pointers.
         */
        std::vector<Meal*>& getMeals();

        /**
         * @brief Displays the meals on the plate.
         * 
         */
        void showMeals();

        /**
         * @brief Returns the table number for the plate.
         * 
         * @return int An integer representing the table number.
         */
        int getTableNumber();

        /**
         * @brief Returns the customer ID for the plate.
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