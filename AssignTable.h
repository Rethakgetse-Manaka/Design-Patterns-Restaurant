#ifndef ASSIGNTABLE_H
#define ASSIGNTABLE_H

#include "CustomerHandler.h"
#include "Table.h"
#include <vector>
#include <iostream>

/**
 * @brief The AssignTable class is a subclass of CustomerHandler and is responsible for assigning tables to customers.
 * 
 */
class AssignTable: public CustomerHandler
{
private:
    std::vector<Table*> tables; /**< A vector of pointers to Table objects representing the available tables. */
public:
    /**
     * @brief Construct a new AssignTable object with the given vector of tables.
     * 
     * @param tables A vector of pointers to Table objects representing the available tables.
     */
    AssignTable(std::vector<Table*> tables);

    /**
     * @brief Handles the customer's request by assigning them a table if one is available.
     * 
     * @param customer A pointer to the Customer object making the request.
     */
    void handleRequest(Customer* customer);

    /**
     * @brief Destroy the AssignTable object.
     * 
     */
    virtual ~AssignTable();
};

#endif