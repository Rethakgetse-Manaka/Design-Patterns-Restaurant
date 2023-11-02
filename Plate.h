
#ifndef Plate_H
#define Plate_H
class Meal;
#include <vector>
class Plate
{
   
    
    private:
        std::vector<Meal*> m_Meals; 
        int tableNumber;

    public:
        
        Plate();

       
        void addMeal(Meal* item);

        
        void removeMeal(Meal* item);

        
        std::vector<Meal*>& getMeals();

        
        void showMeals();
        int getTableNumber();
        virtual ~Plate();
};

#endif