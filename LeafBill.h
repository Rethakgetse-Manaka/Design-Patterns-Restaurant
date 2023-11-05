#ifndef LEAFBILL_H
#define LEAFBILL_H

#include "Bill.h"
#include "Order.h"

class LeafBill: public Bill
/**
 * @brief The LeafBill class represents a leaf node in the composite pattern for the Bill class.
 * 
 * It contains information about a single order and its corresponding bill.
 * It also allows for the addition of a tip to the bill.
 */
{
private:
    Order* order; ///< Pointer to the Order object associated with the bill.
    int billId; ///< Unique identifier for the bill.
    double tip; ///< Amount of tip added to the bill.
public:
    /**
     * @brief Construct a new Leaf Bill object
     * 
     * @param ord Pointer to the Order object associated with the bill.
     * @param tip Amount of tip to be added to the bill.
     */
    LeafBill(Order* ord, double tip);

    /**
     * @brief Set the tip amount for the bill.
     * 
     * @param tip Amount of tip to be added to the bill.
     */
    void setTip(double tip);

    /**
     * @brief Get the tip amount for the bill.
     * 
     * @return double Amount of tip added to the bill.
     */
    double getTip();

    /**
     * @brief Find the bill associated with a given customer.
     * 
     * @param customer Unique identifier for the customer.
     * @return Bill* Pointer to the Bill object associated with the customer.
     */
    virtual Bill* findBill(int customer);

    /**
     * @brief Get the Order object associated with the bill.
     * 
     * @return Order* Pointer to the Order object associated with the bill.
     */
    virtual Order* getOrder();

    /**
     * @brief Get the total amount for the bill, including the tip.
     * 
     * @return double Total amount for the bill.
     */
    double getBillTotal();

    /**
     * @brief Print the details of the bill.
     * 
     */
    void printBill();

    /**
     * @brief Destroy the Leaf Bill object
     * 
     */
    virtual ~LeafBill();
};

#endif