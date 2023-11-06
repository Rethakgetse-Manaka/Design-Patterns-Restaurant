#ifndef ACCOUNTINGSYSTEM_H
#define ACCOUNTINGSYSTEM_H

#include "Inventory.h"
#include "Transaction.h"
#include "Item.h"


class AccountingSystem {
public:
    AccountingSystem(Inventory* observedInventory);
    void recordTransaction(Transaction* transaction);
    void recordSale(Transaction* transaction);
    void generateReport();
    long long getBalance();
    void addBalance(double amount);
    void setBalance(double balance);
    std::list<Transaction*> getTransactions();
    ~AccountingSystem();

private:
    Inventory* observedInventory;
    long long balance;
    std::list<Transaction*> transactions;
};

#endif
