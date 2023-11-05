#ifndef ACCOUNTINGSYSTEM_H
#define ACCOUNTINGSYSTEM_H

#include "Inventory.h"
#include "Transaction.h"
#include "Item.h"


/**
 * @brief The AccountingSystem class manages the financial transactions of a store.
 * 
 * It records transactions, sales, generates reports, and keeps track of the store's balance.
 */
class AccountingSystem {
public:
    AccountingSystem(Inventory* observedInventory);
    void recordTransaction(Transaction* transaction);
    void recordSale(Transaction* transaction);
    void setAccountingSystem(AccountingSystem *as);
    void generateReport();
    long long getBalance();
    void addBalance(double amount);
    void setBalance(double balance);
    std::list<Transaction*> getTransactions();

private:
    Inventory* observedInventory;
    long long balance;
    std::list<Transaction*> transactions;
};

#endif
