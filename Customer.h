#ifndef CUSTOMER_H
#define CUSTOMER_H
using namespace std;
#include <string>
#include <iostream>
class Customer
/**
 * @brief The Customer class represents a customer in a restaurant.
 * 
 */
{
private:
    int customerID; /**< The ID of the customer. */
    int tableID; /**< The ID of the table the customer is seated at. */
    std::string customerName; /**< The name of the customer. */
    int tabID; /**< The ID of the tab associated with the customer. */
public:
    /**
     * @brief Construct a new Customer object.
     * 
     */
    Customer();

    /**
     * @brief Construct a new Customer object with the given ID and name.
     * 
     * @param id The ID of the customer.
     * @param name The name of the customer.
     */
    Customer(int id, std::string name);

    /**
     * @brief Get the ID of the customer.
     * 
     * @return int The ID of the customer.
     */
    int getCustomerID();

    /**
     * @brief Get the name of the customer.
     * 
     * @return std::string The name of the customer.
     */
    std::string getCustomerName();
};
// {
// private:
//     int customerID;
//     int tableID;
//     std::string customerName;
//     int tabID;
// public:
//     Customer();
//     Customer(int id, std::string name);
//     int getCustomerID();
//     std::string getCustomerName();
// };

#endif