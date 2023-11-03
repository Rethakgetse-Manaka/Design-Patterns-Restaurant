#include "Waiter.h"
#include "Plate.h"
#include "CompositeBill.h"
#include "LeafBill.h"

void Waiter::receiveOrder(Order* o)
{
    mediator->notifyOrderPlaced(o);
}

void Waiter::addTable(Table* t)
{
    tables.push_back(t);
}

void Waiter::removeTable(Table * t)
{
    tables.erase(std::remove(tables.begin(), tables.end(), t), tables.end());
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
        if(t != nullptr && t->getTableNumber() == tbn)
            return t;
    }
    return nullptr;

}

void Waiter::presentFoodToTable(Plate* p)
{
    if(p != nullptr)
    {
        std::cout << "Here is your meal, we hope you have a wonderful dining experience with us." <<std::endl;
        std::cout << "Meals: ";
        p->showMeals();

    }
    


}
void Waiter::presentBill(Table* t)
{
    // CompositeBill* cb = new CompositeBill();
    // t->setBill(cb);
    // std::vector<Order*> o = t->getOrders();
    // LeafBill* lb;
    // for(size_t i = 0;i < o.size();i++)
    // {
    //     lb = new LeafBill(o[i]);
    //     cb->addPerson(lb);
    // }
    // cb->printBill();
}