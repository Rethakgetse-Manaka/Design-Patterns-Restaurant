#include "RotisseurChef.h"

Meal* RotisseurChef::createStarter()
{
    return new ChickenSalad;
}

Meal* RotisseurChef::createMain()
{
    return new ChickenBurger;
}

void RotisseurChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}


void RotisseurChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Chicken Salad")
    {
        cout << "Chopping up chicken..." << endl;
        sleep(1);
        cout << "Spicing that baby..." << endl;
        sleep(1);
        cout << "Thrown on the pan..." << endl;
        sleep(1);
        cout << "Getting some greens ready..." << endl;
        sleep(1);
        cout <<"Mixing with the chicken..."<< endl;
        sleep(1);
        cout << "Chicken Salad is ready" << endl;
        sleep(1);
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Chicken Burger")
    {
        cout << "Cooking patty..." << endl;
        sleep(1);
        cout << "Adding the fillings..." << endl;
        sleep(1);
        if (foodItem->getGarnish()) {
            cout << "Adding tomato, lettuce and onion..." << endl;
            sleep(1);
        }

        if (foodItem->getSauce()) {
            cout << "mayo" << endl;
            sleep(1);
        }
        cout << "Add the patty" << endl;
        sleep(1);
        cout << "Chicken Burger done!" << endl;
        sleep(1);
        this->addMeal(createMain());
    }
    if((int)plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}
