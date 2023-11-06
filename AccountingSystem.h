#ifndef ACCOUNTINGSYSTEM_H
#define ACCOUNTINGSYSTEM_H

#include "Inventory.h"
#include "Transaction.h"
#include "Item.h"

using namespace std;

/**
 * AccountingSystem class is responsible for managing the financial transactions of the store.
 * It records transactions, sales, generates reports, and keeps track of the balance.
 */
class AccountingSystem {
public:
    /**
     * Constructor for AccountingSystem class.
     * @param observedInventory pointer to the Inventory object that this AccountingSystem observes.
     */
    AccountingSystem(Inventory* observedInventory);

    /**
     * Records a transaction in the system.
     * @param transaction pointer to the Transaction object to be recorded.
     */
    void recordTransaction(Transaction* transaction);

    /**
     * Records a sale transaction in the system.
     * @param transaction pointer to the Transaction object to be recorded.
     */
    void recordSale(Transaction* transaction);

    /**
     * Generates a report of all transactions in the system.
     */
    void generateReport();

    /**
     * Returns the current balance of the system.
     * @return the current balance of the system.
     */
    long long getBalance();

    /**
     * Adds the given amount to the balance of the system.
     * @param amount the amount to be added to the balance.
     */
    void addBalance(double amount);

    /**
     * Sets the balance of the system to the given value.
     * @param balance the value to set the balance to.
     */
    void setBalance(double balance);

    /**
     * Returns a list of all transactions in the system.
     * @return a list of all transactions in the system.
     */
    std::list<Transaction*> getTransactions();

    /**
     * Destructor for AccountingSystem class.
     */
    ~AccountingSystem();

private:
    Inventory* observedInventory; // pointer to the Inventory object that this AccountingSystem observes.
    long long balance; // the current balance of the system.
    std::list<Transaction*> transactions; // a list of all transactions in the system.
};

#endif
