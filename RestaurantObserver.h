#ifndef RESTAURANTOBSERVER_H
#define RESTAURANTOBSERVER_H

#include "Observer.h"
#include "Inventory.h"
#include "AccountingSystem.h"


class RestaurantObserver : public Observer {
public:
    RestaurantObserver(Inventory* inventory, AccountingSystem* accountingSystem);
    void update();
    void setAccountingSystem(AccountingSystem* accountingSystem);
    Inventory* getInventory();
    std::string getCurrentDate();
    virtual ~RestaurantObserver();
private:
    Inventory* inventory;
    AccountingSystem* accountingSystem;
};

#endif