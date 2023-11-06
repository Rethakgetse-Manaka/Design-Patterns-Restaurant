#include "FryCook.h"

FryCook::FryCook(){}

Meal* FryCook::createStarter()
{
    return new Wings;
}

Meal* FryCook::createMain()
{
    return new FriedMeal;
}

void FryCook::addMeal(Meal* meal){
    plate->addMeal(meal);
}

void FryCook::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Wings")
    {
        cout << "Spicing the wings..." << endl;
        sleep(1);
        cout << "Making wing coat..." << endl;
        sleep(1);
        cout << "Dipping wings in coat" << endl;
        sleep(1);
        cout << "Deep Fryerrr!!!" << endl;
        sleep(1);
        cout <<"Drying from Oil"<< endl;
        sleep(1);
        cout << "Wings ready!" << endl;
        sleep(1);
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Fried Meal")
    {
        cout << "Chopping up ingredients.." << endl;
        sleep(1);
        cout << "Spicing that baby..." << endl;
        sleep(1);
        cout << "Coat" << endl;
        sleep(1);
        cout << "Fryyyy" << endl;
        sleep(1);
        cout << "Fried Meal ready!" << endl;
        sleep(1);
        this->addMeal(createMain());
    }
    if((int)plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}


