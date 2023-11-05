#ifndef TABMEMENTO_H
#define TABMEMENTO_H

#include <string>
#include"Bill.h"

/**
 * @brief The TabMemento class represents a memento object that stores the state of a tab.
 * 
 */
class TabMemento {
public:
  /**
   * @brief Construct a new TabMemento object.
   * 
   * @param customerID The ID of the customer associated with the tab.
   * @param customerName The name of the customer associated with the tab.
   * @param amount The amount owed on the tab.
   */
  TabMemento(int customerID, std::string customerName,double amount);

  /**
   * @brief Get the ID of the customer associated with the tab.
   * 
   * @return int The customer ID.
   */
  int getCustomerID() const;

  /**
   * @brief Get the name of the customer associated with the tab.
   * 
   * @return std::string The customer name.
   */
  std::string getCustomerName() ;

  /**
   * @brief Print the state of the memento object.
   * 
   */
  void printMemento();

  /**
   * @brief Get the amount owed on the tab.
   * 
   * @return double The amount owed.
   */
  double getAmount() const;

private:
  int customerID; /**< The ID of the customer associated with the tab. */
  std::string customerName; /**< The name of the customer associated with the tab. */
  double amount; /**< The amount owed on the tab. */
};


#endif
