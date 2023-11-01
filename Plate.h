#ifndef Plate_H
#define Plate_H
class Meal;
class Plate
{
   
    
    private:
        std::vector<Meal*> m_Meals; /**< A vector to store food items. */
        int tableNumber;

    public:
        /**
         * @brief Default constructor for the Plate class.
         */
        Plate();

        /**
         * @brief Add a food item to the plate.
         * @param item The name of the food item to add.
         */
        void addMeal(Meal* item);

        /**
         * @brief Remove a specific food item from the plate.
         * @param item The name of the food item to remove.
         */
        void removeMeal(Meal* item);

        /**
         * @brief Get a pointer to the array of food items on the plate.
         * @return A pointer to the array of food items.
         */
        std::vector<Meal*>& getMeals();

        /**
         * @brief Destructor for the Plate class.
         */
        void showMeals();
        int getTableNumber();
        ~Plate();
};
#endif