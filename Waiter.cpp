#include "Waiter.h"
#include "Plate.h"
#include "CompositeBill.h"
#include "LeafBill.h"
#include "Customer.h"

Waiter::Waiter(std::string name)
{
    this->name = name;
}

void Waiter::receiveOrder(Order *o)
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
        t->setBill(cb);
        std::vector<Order*> o = t->getOrders();
        LeafBill* lb;
        Customer* temp;
        for(size_t i = 0;i < o.size();i++)
        {
            temp = t->getCustomer(o[i]->getCustomerID());
            lb = new LeafBill(o[i],temp->getTip());
            cb->addPerson(lb);
        }
        cb->printBill();
    }
}