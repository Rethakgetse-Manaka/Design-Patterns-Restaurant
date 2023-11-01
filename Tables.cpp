#include "Tables.h"

using namespace std;

Tables::Tables()
{
}

Tables::~Tables()
{
}

void Tables::requestWaiter()
{
}

// void Tables::setState(TableState *s)
// {
//     delete this->state;
//     this->state = s;
// }

void Tables::addCustomer(Customer *customer)
{
    customers.push_back(customer);
}

void Tables::removeCustomer(Customer *customer)
{
    customers.erase(remove(customers.begin(), customers.end(), customer), customers.end());
}
