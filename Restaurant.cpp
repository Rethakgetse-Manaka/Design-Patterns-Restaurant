#include "Restaurant.h"

using namespace std;

Restaurant::Restaurant()
{
}

void Restaurant::initialCustomerHandling(Customer *customer)
{
    CustomerHandler *customerHandler = new CustomerHandler();
    customerHandler->add(new ValletHandler());
    customerHandler->add(new AssignTable(tables));
    customerHandler->handleRequest(customer);
}

Restaurant::~Restaurant()
{
}