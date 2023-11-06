#include "RestaurantObserver.h"
#include <iostream>
#include "Inventory.h" 
#include "AccountingSystem.h"
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>


RestaurantObserver::RestaurantObserver(Inventory* inventory, AccountingSystem* accountingSystem)
    : inventory(inventory), accountingSystem(accountingSystem) {
    inventory->registerObserver(this);
}

void RestaurantObserver::update() {
    // Respond to changes in the inventory
    std::cout << "Inventory has been updated. Checking and recording transactions..." << std::endl;

    //Get the list of items in the inventory
    std::vector<Item*> items = inventory->getItems();

    //Iterate through the items and check for any changes
    for (Item* item : items) {
        int stockChange = item->getStockChange();
        if (stockChange != 0) {
            // Create a transaction based on the stock change
            double transactionAmount = item->getCost() * stockChange;
            TransactionType transactionType = (stockChange > 0) ? TransactionType::PURCHASE : TransactionType::SALE;
            std::string currentDate = "temp date here"/*getCurrentDate()*/;
            Transaction* transaction = new Transaction(item, transactionAmount, transactionType, currentDate);
            
            // Record the transaction in the accounting system
            accountingSystem->recordTransaction(transaction);

            // Reset the stock change to zero
            item->resetStockChange();
        }
    }
}


void RestaurantObserver::setAccountingSystem(AccountingSystem* accountingSystem) {
    this->accountingSystem = accountingSystem;
}

Inventory *RestaurantObserver::getInventory()
{
    return this->inventory;
}

std::string RestaurantObserver::getCurrentDate()
{
    return std::string();
}

RestaurantObserver::~RestaurantObserver()
{
}
