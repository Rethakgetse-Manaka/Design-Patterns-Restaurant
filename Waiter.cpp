#include "Waiter.h"
#include "Plate.h"
#include "Bill.h"

void Waiter::receiveOrder(Order* o)
{
    mediator->notifyOrderPlaced(o);
}

void Waiter::addTable(Table* t)
{
    tables.push_back(t);
}

std::string Waiter::getName()
{
    return name;
}
bool Waiter::managesTable(int tbn)
{
    for(Table* t: tables)
    {

        if(t != NULL && t->getTableNumber() == tbn)
            return true;
    }
    return false;

}

Table* Waiter::getTable(int tbn)
{
    for(Table* t: tables)
    {
        if(t != NULL && t->getTableNumber() == tbn)
            return t;
    }
    return NULL;

}

void Waiter::presentFoodToTable(Plate* p)
{
    std::cout << "Here is your meal, we hope you have a wonderful dining experience with us." <<std::endl;
    std::cout << "Meals: ";
    p->showMeals();


}
void Waiter::presentBill(Table* t)
{
    
    Bill* b = new Bill();
    
    //Still need to add extra stuff for the bill
    t->setBill(b);

    
    std::cout << "Table No: " <<t->getTableNumber()<< std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << std::left << std::setw(25) << "Item" << "Price" << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::vector<Order*> o = t->getOrders();
    double total = 0;
    for(size_t i = 0;i < o.size();i++)
    {
        
        std::vector<FoodItem*> f = o[i]->getFoodItems();
        for(size_t j = 0; j < f.size();j++)
        {
            total += f[j]->getPrice();
            std::cout << std::left << std::setw(25) << f[j]->getMealName() <<f[j]->getPrice() <<std::endl;
        }
        
    }
    
    std::cout << std::left << std::setw(25) << "Total:" << total << std::endl;
    std::cout << "Thank you for dining with us!" << std::endl;
    

}