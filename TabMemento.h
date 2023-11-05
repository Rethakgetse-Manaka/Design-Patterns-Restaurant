#ifndef TABMEMENTO_H
#define TABMEMENTO_H

#include <string>
#include"Bill.h"

class TabMemento {
public:
  TabMemento(int customerID, std::string customerName,double amount);

  
  int getCustomerID() const;
 std::string getCustomerName() ;
  void printMemento();
  double getAmount() const;

  private:
  int customerID;
  std::string customerName;
   double amount; 
};

#endif
