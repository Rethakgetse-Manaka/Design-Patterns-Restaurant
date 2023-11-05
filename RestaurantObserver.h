#include "Observer.h"
#include "Inventory.h"
#include "AccountingSystem.h"


/**
 * @brief The RestaurantObserver class is a concrete Observer that observes the Inventory and AccountingSystem objects.
 * 
 */
class RestaurantObserver : public Observer {
public:
    /**
     * @brief Construct a new RestaurantObserver object
     * 
     * @param inventory The Inventory object to observe
     * @param accountingSystem The AccountingSystem object to observe
     */
    RestaurantObserver(Inventory* inventory, AccountingSystem* accountingSystem);

    /**
     * @brief Update the state of the observer
     * 
     */
    void update();

    /**
     * @brief Set the AccountingSystem object to observe
     * 
     * @param accountingSystem The AccountingSystem object to observe
     */
    void setAccountingSystem(AccountingSystem* accountingSystem);

    /**
     * @brief Get the Inventory object being observed
     * 
     * @return Inventory* The Inventory object being observed
     */
    Inventory* getInventory();

    /**
     * @brief Get the current date as a string
     * 
     * @return std::string The current date as a string
     */
    std::string getCurrentDate();

private:
    Inventory* inventory; /**< The Inventory object being observed */
    AccountingSystem* accountingSystem; /**< The AccountingSystem object being observed */
};