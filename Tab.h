#ifndef TAB_H
#define TAB_H

#include <string>
#include "TabMemento.h"
#include "CompositeBill.h"

class Bill;

/**
 * @brief The Tab class represents a customer's tab, which includes their ID, name, and amount owed.
 */
class Tab {
public:
    /**
     * @brief Constructs a new Tab object with the given customer ID, name, and amount owed.
     * 
     * @param customerID The ID of the customer associated with this tab.
     * @param customerName The name of the customer associated with this tab.
     * @param amount The amount owed on this tab.
     */
    Tab(int customerID, std::string customerName, double amount);

    /**
     * @brief Destroys the Tab object.
     */
    ~Tab();

    /**
     * @brief Restores the state of this tab from the given memento.
     * 
     * @param memento The memento containing the state to restore.
     */
    void restoreMemento(TabMemento* memento);

    /**
     * @brief Returns a memento containing the current state of this tab.
     * 
     * @return A memento containing the current state of this tab.
     */
    TabMemento* getMemento();

    /**
     * @brief Returns the ID of the customer associated with this tab.
     * 
     * @return The ID of the customer associated with this tab.
     */
    int getCustomerID() const;

    /**
     * @brief Returns the name of the customer associated with this tab.
     * 
     * @return The name of the customer associated with this tab.
     */
    std::string getCustomerName();

private:
    int customerID; /**< The ID of the customer associated with this tab. */
    std::string customerName; /**< The name of the customer associated with this tab. */
    double amount; /**< The amount owed on this tab. */
};

#endif
