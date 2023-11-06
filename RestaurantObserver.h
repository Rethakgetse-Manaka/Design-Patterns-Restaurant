#ifndef RESTAURANTOBSERVER_H
#define RESTAURANTOBSERVER_H

#include "Observer.h"
#include "Inventory.h"
#include "AccountingSystem.h"


/**
 * @brief The RestaurantObserver class is a concrete Observer that observes changes in the Inventory and updates the AccountingSystem accordingly.
 * 
 */
class RestaurantObserver : public Observer {
public:
    /**
     * @brief Construct a new Restaurant Observer object
     * 
     * @param inventory The Inventory to observe
     * @param accountingSystem The AccountingSystem to update
     */
    RestaurantObserver(Inventory* inventory, AccountingSystem* accountingSystem);

    /**
     * @brief Update the AccountingSystem with the latest changes in the Inventory
     * 
     */
    void update();

    /**
     * @brief Set the AccountingSystem object
     * 
     * @param accountingSystem The AccountingSystem to set
     */
    void setAccountingSystem(AccountingSystem* accountingSystem);

    /**
     * @brief Get the Inventory object
     * 
     * @return Inventory* The Inventory being observed
     */
    Inventory* getInventory();

    /**
     * @brief Get the current date as a string
     * 
     * @return std::string The current date
     */
    std::string getCurrentDate();

    /**
     * @brief Destroy the Restaurant Observer object
     * 
     */
    virtual ~RestaurantObserver();

private:
    Inventory* inventory; ///< The Inventory being observed
    AccountingSystem* accountingSystem; ///< The AccountingSystem to update
};

#endif