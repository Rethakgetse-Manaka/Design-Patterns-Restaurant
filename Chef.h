#ifndef Chef_H
#define Chef_H
#include "Colleague.h"
#include "Plate.h"
#include "FoodItem.h"
#include "OrderMediator.h"
#include <string>
#include <iostream>
#include <unistd.h>

class Chef:public Colleague
/**
 * @brief The Chef class is an abstract base class that defines the interface for creating meals and receiving orders.
 * 
 * It contains a protected member variable for the chef's name and a static member variable for the plate.
 * The class provides pure virtual functions for creating starters and mains, adding meals, and receiving orders.
 * It also provides a static function to set the plate.
 */
{
    protected:
        std::string name; /**< The name of the chef. */
        static Plate* plate; /**< A pointer to the plate object. */
    public:
        /**
         * @brief Creates a starter meal.
         * 
         * @return A pointer to the created starter meal.
         */
        virtual Meal* createStarter() = 0;
        
        /**
         * @brief Creates a main meal.
         * 
         * @return A pointer to the created main meal.
         */
        virtual Meal* createMain() = 0;
        
        /**
         * @brief Adds a meal to the plate.
         * 
         * @param meal A pointer to the meal to be added.
         */
        virtual void addMeal(Meal* meal) = 0;
        
        /**
         * @brief Receives an order for a food item.
         * 
         * @param foodItem A pointer to the food item being ordered.
         * @param tableNumber The number of the table the order is for.
         * @param custID The ID of the customer placing the order.
         * @param numOfItems The number of items being ordered.
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems) = 0;
        
        /**
         * @brief Sets the plate object.
         * 
         * @param plate A pointer to the plate object.
         */
        static void setPlate(Plate* plate);
};


#endif