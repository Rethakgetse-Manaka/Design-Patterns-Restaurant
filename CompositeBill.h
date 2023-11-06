#ifndef COMPOSITEBILL_H
#define COMPOSITEBILL_H

#include "Bill.h"
#include <vector>

class CompositeBill: public Bill
/**
 * @brief The CompositeBill class represents a composite bill that can contain multiple bills.
 * 
 */
{
private:
    std::vector<Bill*> tableBills; /**< A vector of pointers to Bill objects representing the bills contained in the composite bill. */
public:
    /**
     * @brief Construct a new Composite Bill object
     * 
     */
    CompositeBill();

    /**
     * @brief Prints the composite bill.
     * 
     */
    void printBill();

    /**
     * @brief Finds a bill with the specified customer ID.
     * 
     * @param customer The customer ID to search for.
     * @return A pointer to the Bill object with the specified customer ID, or nullptr if not found.
     */
    virtual Bill* findBill(int customer);

    /**
     * @brief Adds a bill to the composite bill.
     * 
     * @param Bill A pointer to the Bill object to add.
     */
    void addPerson(Bill* Bill);

    /**
     * @brief Removes a bill with the specified customer ID from the composite bill.
     * 
     * @param customer The customer ID of the bill to remove.
     */
    void removePerson(int customer);

    /**
     * @brief Gets the total amount of the composite bill.
     * 
     * @return The total amount of the composite bill.
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
