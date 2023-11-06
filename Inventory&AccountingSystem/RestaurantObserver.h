#include "Observer.h"
#include "Inventory.h"
#include "AccountingSystem.h"


class RestaurantObserver : public Observer {
public:
    RestaurantObserver(Inventory& inventory, AccountingSystem& accountingSystem);
    void update() override;
    void setAccountingSystem(AccountingSystem& accountingSystem);
    std::string getCurrentDate();

private:
    Inventory& inventory;
    AccountingSystem& accountingSystem;
};