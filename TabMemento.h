#ifndef TABMEMENTO_H
#define TABMEMENTO_H

#include <string>
#include"Bill.h"

/**
 * @brief The TabMemento class represents a memento object that stores the state of a customer's tab.
 * 
 */
class TabMemento {
public:
  /**
   * @brief Construct a new TabMemento object.
   * 
   * @param customerID The ID of the customer.
   * @param customerName The name of the customer.
   * @param amount The amount of the customer's tab.
   */
  TabMemento(int customerID, std::string customerName, double amount);

  //Bill *findBill(int customerID);
  
  /**
   * @brief Get the ID of the customer.
   * 
   * @return int The ID of the customer.
   */
  int getCustomerID() const;
  
  /**
   * @brief Get the name of the customer.
   * 
   * @return std::string The name of the customer.
   */
  std::string getCustomerName() ;
  
  /**
   * @brief Get the amount of the customer's tab.
   * 
   * @return double The amount of the customer's tab.
   */
  double getAmount() const;
  
  /**
   * @brief Print the details of the memento object.
   * 
   */
  void printMemento();

private:
  int customerID; /**< The ID of the customer. */
  std::string customerName; /**< The name of the customer. */
  double amount; /**< The amount of the customer's tab. */
};

#endif
