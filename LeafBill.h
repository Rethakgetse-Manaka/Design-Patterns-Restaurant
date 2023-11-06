#ifndef LEAFBILL_H
#define LEAFBILL_H

#include "Bill.h"
#include "Order.h"
#include <iomanip>

class LeafBill: public Bill
/**
 * LeafBill class represents a single bill for a customer's order.
 * It contains information about the order, bill ID, and tip amount.
 */ {
private:
    Order* order;   // Pointer to the order associated with this bill
    int billId;     // Unique ID for this bill
    double tip;     // Tip amount for this bill

public:
    /**
     * Constructor for LeafBill class.
     * @param ord Pointer to the order associated with this bill
     * @param tip Tip amount for this bill
     */
    LeafBill(Order* ord, double tip);

    /**
     * Setter for tip amount.
     * @param tip Tip amount for this bill
     */
    void setTip(double tip);

    /**
     * Getter for tip amount.
     * @return Tip amount for this bill
     */
    double getTip();

    /**
     * Finds the bill associated with the given customer ID.
     * Since this is a leaf node, it simply returns itself if the customer ID matches.
     * @param customer Customer ID to search for
     * @return Pointer to the bill associated with the given customer ID, or nullptr if not found
     */
    virtual Bill* findBill(int customer);

    /**
     * Getter for the order associated with this bill.
     * @return Pointer to the order associated with this bill
     */
    virtual Order* getOrder();

    /**
     * Calculates the total cost of this bill, including the order cost and tip amount.
     * @return Total cost of this bill
     */
    double getBillTotal();

    /**
     * Prints the details of this bill to the console.
     */
    void printBill();

    /**
     * Destructor for LeafBill class.
     */
    virtual ~LeafBill();
};

#endif