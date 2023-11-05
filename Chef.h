#ifndef Chef_H
#define Chef_H
#include "Colleague.h"
#include "Plate.h"
#include "FoodItem.h"
#include "OrderMediator.h"
#include <string>
#include <iostream>
#include <unistd.h>

/**
 * @brief The Chef class is a concrete Colleague that creates and adds meals to the plate.
 * 
 */
/**
 * @brief The Chef class is a concrete Colleague that creates meals and receives orders from Waiters.
 * 
 */
class Chef:public Colleague
{
    protected:
        std::string name;
        static Plate* plate;
    public:
        
        virtual Meal* createStarter() = 0;
        virtual Meal* createMain() = 0;
        virtual void addMeal(Meal* meal) = 0;

        /**
         * @brief Sets the Plate object for all Chef objects.
         * 
         * @param plate A pointer to the Plate object.
         */
        static void setPlate(Plate* plate);

        /**
         * @brief Receives an order from a Waiter and creates the corresponding Meal object.
         * 
         * @param foodItem A pointer to the FoodItem object that was ordered.
         * @param tableNumber The table number of the customer who ordered the food.
         * @param custID The ID of the customer who ordered the food.
         * @param numOfItems The number of items ordered.
         */
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems) = 0;
};

#endif