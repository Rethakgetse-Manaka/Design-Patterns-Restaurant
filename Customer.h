#ifndef CUSTOMER_H
#define CUSTOMER_H

/**
 * @brief The Customer class represents a customer in a restaurant.
 * 
 */
class TableVisitor;
#include "CustomerState.h"
#include "Order.h"
#include "OrderHandler.h"
#include "RestaurantOrderMediator.h"
#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include "Bill.h"
#include "Neutral.h"
#include "ComplaintsManager.h"
#include "Item.h"
#include "AccountingSystem.h"
#include "Transaction.h"
#include "AdminManager.h"
#include "Waiter.h"

class Customer
{
private:
    int customerID; /**< The ID of the customer. */
    int valletID; /**< The ID of the vallet assigned to the customer. */
    int tableID; /**< The ID of the table assigned to the customer. */
    std::string customerName; /**< The name of the customer. */
    CustomerState *state; /**< The state of the customer. */
    Order *order; /**< The order of the customer. */
    double tip; /**< The tip given by the customer. */
    Table* table; /**< The table assigned to the customer. */
    Tab* tab; /**< The tab of the customer. */
public:
    /**
     * @brief Construct a new Customer object.
     * 
     */
    Customer();

    /**
     * @brief Construct a new Customer object.
     * 
     * @param id The ID of the customer.
     * @param name The name of the customer.
     */
    Customer(int id, std::string name);

    /**
     * @brief Set the Tab object.
     * 
     * @param t The tab of the customer.
     */
    void setTab(Tab* t);

    /**
     * @brief Get the Tab object.
     * 
     * @return Tab* The tab of the customer.
     */
    Tab* getTab();

    /**
     * @brief Destroy the Customer object.
     * 
     */
    ~Customer();

    /**
     * @brief Set the Table object.
     * 
     * @param t The table assigned to the customer.
     */
    void setTable(Table* t);

    /**
     * @brief Get the Table object.
     * 
     * @return Table* The table assigned to the customer.
     */
    Table* getTable();

    /**
     * @brief Get the Customer ID.
     * 
     * @return int The ID of the customer.
     */
    int getCustomerID();

    /**
     * @brief Get the Customer Name.
     * 
     * @return std::string The name of the customer.
     */
    std::string getCustomerName();

    /**
     * @brief Get the Table ID.
     * 
     * @return int The ID of the table assigned to the customer.
     */
    int getTableID();

    /**
     * @brief Get the Customer State object.
     * 
     * @return CustomerState* The state of the customer.
     */
    CustomerState *getState();

    /**
     * @brief Get the Order object.
     * 
     * @return Order* The order of the customer.
     */
    Order* getOrder();

    /**
     * @brief Get the Tip object.
     * 
     * @return double The tip given by the customer.
     */
    double getTip();

    /**
     * @brief Set the Table ID.
     * 
     * @param id The ID of the table assigned to the customer.
     */
    void setTableID(int id);

    /**
     * @brief Set the Vallet ID.
     * 
     * @param id The ID of the vallet assigned to the customer.
     */
    void setValletID(int id);

    /**
     * @brief Request a waiter.
     * 
     * @return OrderHandler* The order handler of the customer.
     */
    OrderHandler *requestWaiter();

    /**
     * @brief Set the Customer State object.
     * 
     * @param s The state of the customer.
     */
    void setState(CustomerState *s);

    /**
     * @brief Pay the bill.
     * 
     * @param bill The bill of the customer.
     * @param aS The accounting system.
     */
    void payBill(Bill* bill, AccountingSystem* aS);

    /**
     * @brief Place an order.
     * 
     */
    void placeOrder();

    /**
     * @brief Display the menu.
     * 
     * @return Order* The order of the customer.
     */
    Order* menu();

    /**
     * @brief Complain.
     * 
     */
    void complain();

    /**
     * @brief Resolve a complaint.
     * 
     */
    void resolveComplaint();

    /**
     * @brief Resolve a service.
     * 
     */
    void resolveService();

    /**
     * @brief Increase the tip.
     * 
     */
    void increaseTip();

    /**
     * @brief Decrease the tip.
     * 
     */
    void decreaseTip();

    /**
     * @brief Respond with satisfaction.
     * 
     */
    void respondWithSatifaction();

    /**
     * @brief Respond with dissatisfaction.
     * 
     */
    void respondWithDissatifaction();

    /**
     * @brief Eat.
     * 
     */
    void eat();

    /**
     * @brief Drink.
     * 
     */
    void drink();

    /**
     * @brief Leave.
     * 
     */
    void leave();

    /**
     * @brief Accept a table visitor.
     * 
     * @param v The table visitor.
     */
    void accept(TableVisitor *v);
};

#endif