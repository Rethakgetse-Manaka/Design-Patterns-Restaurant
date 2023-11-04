#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Item.h"

enum class TransactionType {
    PURCHASE,
    SALE
};

class Transaction {
public:
    Transaction(Item* item, double amount, TransactionType type, const std::string &date);
    Item* getItem() const;
    double getAmount() const;
    TransactionType getType() const;
    double getTotalCost() const;
    double getTotalRevenue() const;
    std::string getDate() const;

private:
    Item* item;
    double amount;
    TransactionType type;
    std::string date; 
};

#endif
