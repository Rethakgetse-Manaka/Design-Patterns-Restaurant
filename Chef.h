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
{
    protected:
        std::string name;
        static Plate* plate;
    public:
        virtual ~Chef();
        virtual Meal* createStarter() = 0;
        virtual Meal* createMain() = 0;
        virtual void addMeal(Meal* meal) = 0;
        static void setPlate(Plate* plate);
        virtual void receiveOrder(FoodItem* foodItem,int tableNumber,int custID,int numOfItems) = 0;
};

#endif