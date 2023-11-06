#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Item.h"

enum class TransactionType {
    PURCHASE,
    SALE
};

/**
 * @brief The Transaction class represents a single transaction made for an item.
 * 
 */
class Transaction {
public:
    /**
     * @brief Construct a new Transaction object.
     * 
     * @param item The item involved in the transaction.
     * @param amount The amount of the item involved in the transaction.
     * @param type The type of the transaction (buy or sell).
     * @param date The date of the transaction.
     */
    Transaction(Item* item, double amount, TransactionType type, const std::string &date);

    /**
     * @brief Get the item involved in the transaction.
     * 
     * @return Item* The item involved in the transaction.
     */
    Item* getItem() const;

    /**
     * @brief Get the amount of the item involved in the transaction.
     * 
     * @return double The amount of the item involved in the transaction.
     */
    double getAmount() const;

    /**
     * @brief Get the type of the transaction.
     * 
     * @return TransactionType The type of the transaction.
     */
    TransactionType getType() const;

    /**
     * @brief Get the total cost of the transaction.
     * 
     * @return double The total cost of the transaction.
     */
    double getTotalCost() const;

    /**
     * @brief Get the total revenue of the transaction.
     * 
     * @return double The total revenue of the transaction.
     */
    double getTotalRevenue() const;

    /**
     * @brief Get the date of the transaction.
     * 
     * @return std::string The date of the transaction.
     */
    std::string getDate() const;

    /**
     * @brief Destroy the Transaction object.
     * 
     */
    ~Transaction();
private:
    Item* item; /**< The item involved in the transaction. */
    double amount; /**< The amount of the item involved in the transaction. */
    TransactionType type; /**< The type of the transaction (buy or sell). */
    std::string date; /**< The date of the transaction. */
};

#endif
