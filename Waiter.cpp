#include "Waiter.h"
#include "Plate.h"
#include "CompositeBill.h"
#include "LeafBill.h"
#include "Customer.h"

Waiter::Waiter(std::string n)
{
    name = n;
    mediator = nullptr;
}

Waiter::~Waiter()
{
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
        std::cout << std::endl;
        std::cout << "Here is your meal, we hope you have a wonderful dining experience with us." <<std::endl;
        for (int i = 0; i < (int) tables.size(); i++) {
            if (tables[i]->getCustomer(p->getCustomerID()) != nullptr) {
                tables[i]->getCustomer(p->getCustomerID())->eat();
            }
        }
        // p->showMeals();

    }
    

}

void Waiter::presentDrinksToTable(DrinkTray* d)
{
    if(d != nullptr)
    {
        std::cout << std::endl;
        std::cout << "Here are your drinks, we hope you have a wonderful dining experience with us." <<std::endl << std::endl;
        sleep(1);
        for (int i = 0; i < (int)tables.size(); i++) {
            if (tables[i]->getCustomer(d->getCustomerID()) != nullptr) {
                tables[i]->getCustomer(d->getCustomerID())->drink();
            }
        }
        // p->showMeals();
        
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
