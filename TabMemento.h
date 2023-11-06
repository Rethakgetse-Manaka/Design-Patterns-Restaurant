#ifndef TABMEMENTO_H
#define TABMEMENTO_H

#include <string>
#include"Bill.h"

class TabMemento {
public:
  TabMemento(int customerID, std::string customerName, double amount);

  //Bill *findBill(int customerID);
  int getCustomerID() const;
 std::string getCustomerName() ;
 double getAmount() const;
  void printMemento();

  private:
  int customerID;
  std::string customerName;
  double amount; 
};

#endif
