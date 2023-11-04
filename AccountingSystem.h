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
    void setAccountingSystem(AccountingSystem *as);
    void generateReport();
    double getBalance();
    void addBalance(double amount);
    void setBalance(double balance);
    std::list<Transaction*> getTransactions();

private:
    Inventory* observedInventory;
    double balance;
    std::list<Transaction*> transactions;
};

#endif
