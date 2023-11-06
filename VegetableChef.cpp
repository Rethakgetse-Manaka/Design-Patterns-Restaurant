#include "VegetableChef.h"

Meal* VegetableChef::createStarter()
{
    return new GreenSalad;
}

Meal* VegetableChef::createMain()
{
    return new StirFry;
}

void VegetableChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}

void VegetableChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Green Salad")
    {
        cout << "Chopping up cucumbers..." << endl;
        sleep(1);
        cout << "Slicing up some Tomatoes..." << endl;
        sleep(1);
        cout << "Can't forget the peppers..." << endl;
        sleep(1);
        cout << "Putting a bed of lettuce..." << endl;
        sleep(1);
        cout <<"Mixing together..."<< endl;
        sleep(1);
        cout << "Adding some extra virgin..." << endl;
        sleep(1);
        cout << "Green Salad is good to goooo!" << endl;
        sleep(1);
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Stir Fry")
    {
        cout << "Chopping and slicing the vegetables..." << endl;
        sleep(1);
        cout << "Throwing them to onto the pan..." << endl;
        sleep(1);
        cout << "Spicing that ting!" << endl;
        sleep(1);
        cout << "Almost there..." << endl;
        sleep(1);
        cout <<"Stir Fry is now Stir Fried!"<< endl;
        sleep(1);
        this->addMeal(createMain());
    }
    if((int)plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}
