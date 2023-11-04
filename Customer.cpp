#include "Customer.h"
//#include "Order.h"
using namespace std;

Customer::Customer(int id, std::string name)
{
    this->customerID = id;
    this->customerName = name;
    //this->order = NULL;
}
int Customer::getCustomerID()
{
    return this->customerID;
}

std::string Customer::getCustomerName()
{
    return this->customerName;
}
