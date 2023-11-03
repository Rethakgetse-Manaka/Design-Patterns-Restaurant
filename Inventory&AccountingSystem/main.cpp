#include "Inventory.h"
#include "AccountingSystem.h"
#include "Transaction.h"
#include "Item.h"
#include "RestaurantObserver.h"
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

std::string getCurrentDate() {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);
    std::stringstream ss;
    ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

int main()
{
    Inventory inventory;
    AccountingSystem accountingSystem(&inventory);
    accountingSystem.setBalance(35000);
    //std::cout << accountingSystem.getBalance() << std::endl;

    // Create a RestaurantObserver and register it
    RestaurantObserver observer(inventory, accountingSystem);
    inventory.registerObserver(&observer);

    // Simulate restaurant operations
    std::cout << "Restaurant operations:\n";

    // Add items to inventory
    inventory.addStock(Item("Food Item", 50, 5.0, 0));
    inventory.addStock(Item("Drink Item", 100, 2.0, 0));
    //std::cout << inventory.stockToString() << std::endl;

    // Create transactions
    Transaction purchaseTransaction1(Item("Steak Fillets", 0, 5.0, 0), 20 * 5.0, TransactionType::PURCHASE, getCurrentDate());
    Transaction purchaseTransaction2(Item("Tomato Sauce", 0, 2.0, 0), 50 * 2.0, TransactionType::PURCHASE, getCurrentDate());

    // Record the transactions
    accountingSystem.recordTransaction(purchaseTransaction1);
    accountingSystem.recordTransaction(purchaseTransaction2);

    // Generate a report
    accountingSystem.generateReport();
    return 0;
}

