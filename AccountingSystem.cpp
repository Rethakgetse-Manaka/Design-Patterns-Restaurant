#include "AccountingSystem.h"
#include "Transaction.h"
#include "Inventory.h"
#include <iostream>
#include <iomanip>

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
    std::cout << "|---------------------------------------|"  << endl;   
    cout << left <<  setfill('-') << setw(12) << "|" << right << "Financial Report:"  << setfill('-') << setw(12) << "|" << endl;

    std::cout << "|     ----------------------------      |\n";
    for (Transaction* transaction : transactions)
    {
        std::cout << left << setfill(' ') << setw(3) << "|" << right << "Date: " << transaction->getDate() << setfill(' ') << setw(13) << "|" << endl;
        if (transaction->getType() == TransactionType::PURCHASE) {
            std::cout << left << setfill(' ') << setw(3) << "|" << right << "Type: " << "Purchase" << setfill(' ') << setw(24) << "|" << "\n";
            int namelength = transaction->getItem()->getName().size();
            std::cout << "|    - " << right << transaction->getItem()->getName() << ": " << transaction->getItem()->getQuantity() << " units @ R" << transaction->getItem()->getCost() << setfill(' ') << setw(18-namelength) << "|" << "\n";
            std::cout << left << setfill(' ') << setw(3) << "|" << right << "Total Cost: R" << transaction->getAmount() << setfill(' ') << setw(21) << "|" << "\n";
        }
        else {
            std::cout << left << setfill(' ') << setw(3) << "|" << right << "Type: " << "Sale" << setfill(' ') << setw(28) << "|" << "\n";
            int namelength = transaction->getItem()->getName().size();
            std::cout << "|    - " << right << transaction->getItem()->getName() << ": " << transaction->getItem()->getQuantity() << " units @ R" << transaction->getItem()->getCost() << setfill(' ') << setw(19-namelength) << "|" << "\n";
            std::cout << left << setfill(' ') << setw(3) << "|" << right << "Total Cost: R" << transaction->getAmount() << setfill(' ') << setw(23) << "|" << "\n";
        }
        std::cout << left << setfill(' ') << setw(3) << "|" << right << "Items:" << setfill(' ') << setw(32) << "|" << endl;

        
        

        std::cout << "|           -----------------           |\n";
    }
    const std::string RED_COLOR = "\x1B[31m";
    const std::string GREEN_COLOR = "\x1B[32m";
    const std::string RESET_COLOR = "\x1B[0m";
    std::cout << left <<  setfill('-') << setw(8) << "|" << right <<  "Current Balance:" << GREEN_COLOR << " R" << getBalance() << RESET_COLOR << setfill('-') << setw(8) << "|" << endl;
    std::cout << "|---------------------------------------|"  << endl;   
}
 
long long AccountingSystem::getBalance()
{
    

    return this->balance;
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

AccountingSystem::~AccountingSystem()
{
    if(observedInventory)
    {
        delete observedInventory;
        observedInventory = nullptr;
    }

    for (Transaction* transaction : transactions)
    {
        delete transaction;
        transaction = nullptr;
    }
}
