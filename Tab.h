#ifndef TAB_H
#define TAB_H

#include <string>
#include "TabMemento.h"
//#include "CompositeBill.h"

//class Bill;

/**
 * @brief The Tab class represents a customer's tab, which includes their ID, name, and amount owed.
 */
class Tab {
public:
    /**
     * @brief Constructs a new Tab object with the given customer ID, name, and amount owed.
     * 
     * @param customerID The ID of the customer.
     * @param customerName The name of the customer.
     * @param amount The amount owed by the customer.
     */
    Tab(int customerID, std::string customerName, double amount);

    /**
     * @brief Destroys the Tab object.
     */
    ~Tab();

    /**
     * @brief Restores the state of the Tab object from a memento.
     * 
     * @param memento The memento to restore from.
     */
    void restoreMemento(TabMemento* memento);

    /**
     * @brief Returns a memento representing the current state of the Tab object.
     * 
     * @return The memento representing the current state of the Tab object.
     */
    TabMemento* getMemento();

    /**
     * @brief Returns the ID of the customer associated with the tab.
     * 
     * @return The ID of the customer associated with the tab.
     */
    int getCustomerID() const;

    /**
     * @brief Returns the amount owed by the customer associated with the tab.
     * 
     * @return The amount owed by the customer associated with the tab.
     */
    double getAmount() const;

    /**
     * @brief Returns the name of the customer associated with the tab.
     * 
     * @return The name of the customer associated with the tab.
     */
    std::string getCustomerName();

private:
    int customerID; /**< The ID of the customer associated with the tab. */
    std::string customerName; /**< The name of the customer associated with the tab. */
    double amount; /**< The amount owed by the customer associated with the tab. */
};

#endif
