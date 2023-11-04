#include "Waiter.h"
#include "Plate.h"
#include "CompositeBill.h"
#include "LeafBill.h"
#include "Customer.h"
#include "Customer.h"

void Waiter::receiveOrder(Order* o)
{
    if(o != nullptr)
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
    if(t != nullptr)
    {
        CompositeBill* cb = new CompositeBill();
        std::vector<Customer*> o = t->getCustomers();
        LeafBill* lb;
        for(int i = 0;i < (int)o.size();i++)
        {
            lb = new LeafBill(o[i]->getOrder(),o[i]->getTip());
            cb->addPerson(lb);
        }
        t->setBill(cb);
        cb->printBill();
    }
}

Waiter::Waiter(std::string n)
{
    this->name = n;
}
