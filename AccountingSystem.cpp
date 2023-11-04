#include "AccountingSystem.h"
#include "Transaction.h"
#include "Inventory.h"
#include <iostream>

AccountingSystem::AccountingSystem(Inventory *observedInventory) : observedInventory(observedInventory), balance(0.0) {}

void AccountingSystem::recordTransaction(Transaction* transaction)
{
    transactions.push_back(transaction);

    double totalCost = transaction->getAmount();
    balance -= totalCost;
}

void AccountingSystem::recordSale(Transaction *transaction)
{
    transactions.push_back(transaction);
    double tot = transaction->getAmount();
    balance += tot;
}

void AccountingSystem::generateReport()
{
    // std::cout << "Implement report logic here" << std::endl;

    std::cout << "Financial Report:\n";
    std::cout << "-----------------\n";

    for (Transaction* transaction : transactions)
    {
        std::cout << "Date: " << transaction->getDate() << "\n";
        std::cout << "Type: " << (transaction->getType() == TransactionType::PURCHASE ? "Purchase" : "Sale") << "\n";
        std::cout << "Items:\n";

        // for (const Item& item : transaction.getItems()) {
        std::cout << "  - " << transaction->getItem()->getName() << ": " << transaction->getItem()->getQuantity() << " units @ R" << transaction->getItem()->getCost() << "\n";
        //}

        // if (transaction->getType() == TransactionType::PURCHASE)
        // {
            std::cout << "Total Cost: R" << transaction->getAmount() << "\n";
        

        std::cout << "-----------------\n";
    }

    std::cout << "Current Balance: R" << getBalance() << "\n";
}

long long AccountingSystem::getBalance()
{
    double calculatedBalance = this->balance;
    for (const Transaction* transaction : transactions)
    {
        if (transaction->getType() == TransactionType::PURCHASE)
        {
            // Deduct the cost of the purchased items from the balance
            double totalCost = transaction->getTotalCost();
            calculatedBalance = calculatedBalance - totalCost;
        }
        else if (transaction->getType() == TransactionType::SALE)
        {
            // Add the revenue from the sold items to the balance
            double totalRevenue = transaction->getTotalRevenue();
            calculatedBalance += totalRevenue;
        }
    }

    return calculatedBalance;
}

void AccountingSystem::addBalance(double amount)
{
    this->balance += amount;
}

void AccountingSystem::setBalance(double b)
{
    balance = b;
}

std::list<Transaction*> AccountingSystem::getTransactions()
{
    return transactions;
}