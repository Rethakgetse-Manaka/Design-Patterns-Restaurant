#ifndef TAB_H
#define TAB_H

#include <string>
#include "TabMemento.h"
#include "CompositeBill.h"

class Bill;

class Tab {
public:
    Tab(int customerID, std::string customerName, double amount);
    ~Tab();

    void restoreMemento( TabMemento* memento);
    TabMemento* getMemento();
   //customer
    int getCustomerID() const;
    std::string getCustomerName() ;
    //bill
    
  
private:
    int customerID;
    std::string customerName;
    double amount;
    
};

#endif
