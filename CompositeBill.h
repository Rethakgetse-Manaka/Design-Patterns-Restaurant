#ifndef COMPOSITEBILL_H
#define COMPOSITEBILL_H

#include "Bill.h"
#include <vector>

class CompositeBill: public Bill
/**
 * @brief The CompositeBill class represents a composite bill that contains multiple bills.
 * 
 * It inherits from the Bill class and implements its methods. It also has additional methods to add and remove bills, 
 * get the total bill amount, and get the order associated with the bill.
 */
{
private:
    std::vector<Bill*> tableBills; /**< A vector of pointers to Bill objects representing the bills in the composite bill. */
public:
    /**
     * @brief Construct a new Composite Bill object
     * 
     */
    CompositeBill();

    /**
     * @brief Prints the bill details of all the bills in the composite bill.
     * 
     */
    void printBill();

    /**
     * @brief Finds the bill associated with the given customer ID.
     * 
     * @param customer The ID of the customer whose bill is to be found.
     * @return A pointer to the Bill object associated with the given customer ID.
     */
    virtual Bill* findBill(int customer);

    /**
     * @brief Adds a new bill to the composite bill.
     * 
     * @param Bill A pointer to the Bill object to be added.
     */
    void addPerson(Bill* Bill);

    /**
     * @brief Removes the bill associated with the given customer ID from the composite bill.
     * 
     * @param customer The ID of the customer whose bill is to be removed.
     */
    void removePerson(int customer);

    /**
     * @brief Calculates the total bill amount of all the bills in the composite bill.
     * 
     * @return The total bill amount.
     */
    double getBillTotal();

    /**
     * @brief Gets the order associated with the composite bill.
     * 
     * @return A pointer to the Order object associated with the composite bill.
     */
    virtual Order* getOrder() ;

    /**
     * @brief Destroy the Composite Bill object
     * 
     */
    virtual ~CompositeBill();
};

#endif
