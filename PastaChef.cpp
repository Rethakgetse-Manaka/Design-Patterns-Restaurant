#include "PastaChef.h"

Meal* PastaChef::createStarter()
{
    return new Ramen;
}

Meal* PastaChef::createMain()
{
    return new Alfredo;
}

void PastaChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}


void PastaChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{
    if(foodItem->getMealName() == "Ramen")
    {
        cout << "Boiling..." << endl;
        sleep(1);
        cout << "Still boiling..." << endl;
        sleep(1);
        cout << "Still boiling..." << endl;
        sleep(1);
        cout << "Adding some garnish..." << endl;
        sleep(1);
        cout <<"Ramen ready to go!"<< endl;
        sleep(1);
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Alfredo")
    {
        cout << "Boiling the pasta..." << endl;
        sleep(1);
        cout << "Chopping mushrooms..." << endl;
        sleep(1);
        cout << "Adding them to boil..." << endl;
        sleep(1);
        cout << "Dishing up..." << endl;
        sleep(1);
        cout <<"Adding some mushroom sauce..."<< endl;
        sleep(1);
        cout << "Alfredo is Reado!" << endl;
        this->addMeal(createMain());
    }
    if((int)plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}

