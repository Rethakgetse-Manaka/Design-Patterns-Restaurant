
#ifndef Plate_H
#define Plate_H
class Meal;
#include <vector>
class Plate
{
   
    
    private:
        std::vector<Meal*> m_Meals; 
        int tableNumber;
        int customerID;


    public:
        
        Plate();

       
        void addMeal(Meal* item);

        void setTableNumber(int tableNum);
        void setCustomerID(int ID);
        
        void removeMeal(Meal* item);

        
        std::vector<Meal*>& getMeals();

        
        void showMeals();
        int getTableNumber();
        int getCustomerID();
        virtual ~Plate();
};

#endif