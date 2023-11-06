#include "GrillChef.h"

Meal* GrillChef::createStarter()
{
    return new BeefKebab;
}

Meal* GrillChef::createMain()
{
    return new BeefBurger;
}

void GrillChef::addMeal(Meal* meal){
    plate->addMeal(meal);
}

void GrillChef::receiveOrder(FoodItem* foodItem, int tableNumber, int custID, int numOfItems)
{

    if(foodItem->getMealName() == "Beef Kebab")
    {   
        cout << "Chopping up beef..." << endl;
        sleep(1);
        cout << "Spicing that baby..." << endl;
        sleep(1);
        cout << "Thrown on the pan..." << endl;
        sleep(1);
        cout << "Sizzle Sizzle!" << endl;
        sleep(1);
        cout <<"Assembling Kebab..."<< endl;
        sleep(1);
        cout << "Beef Kebab done!" << endl;
        sleep(1);
        this->addMeal(createStarter());
    }
    else if(foodItem->getMealName() == "Beef Burger")
    {
        cout << "Making patty" << endl;
        sleep(1);
        cout << "Spicing that baby..." << endl;
        sleep(1);
        cout << "Thrown on the pan..." << endl;
        sleep(1);
        cout << "Sizzle Sizzle!" << endl;
        sleep(1);
        if (foodItem->getWellDone()) {
            cout << "Patty Well Done" << endl;
            sleep(1);
        }

        if (!foodItem->getWellDone()) {
            cout << "Patty Medium Rare" << endl;
            sleep(1);
        }
        cout <<"Assembling Burger..."<< endl;
        sleep(1);
        if (foodItem->getGarnish()) {
            cout << "Adding Lettuce, Tomato, And Gherkins" << endl;
            sleep(1);
        }
        
        if (foodItem->getSauce()) {
            cout << "Adding Special Sauce" << endl;
            sleep(1);
        }

        cout << "Burger done!" << endl;
        sleep(1);
        this->addMeal(createMain());
    }

    if((int) plate->getMeals().size() == numOfItems)
    {
        mediator->notifyPlateReady(plate);
    }
}

