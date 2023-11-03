#ifndef CUSTOMER_H
#define CUSTOMER_H
using namespace std;
#include <string>
#include <iostream>
class Customer
{
private:
    int customerID;
    int tableID;
    std::string customerName;
    int tabID;
public:
    Customer();
    Customer(int id, std::string name);
    int getCustomerID();
    std::string getCustomerName();
};

#endif