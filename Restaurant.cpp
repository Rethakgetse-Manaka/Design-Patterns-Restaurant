#include "Restaurant.h"

using namespace std;

Restaurant::Restaurant()
{
}

void Restaurant::addValet(Valet *valet)
{
    valets.push_back(valet);
}

void Restaurant::addTable(Table *table)
{
    tables.push_back(table);
}

void Restaurant::addManager(TableVisitor *manager)
{
    managers.push_back(manager);
}

void Restaurant::initialCustomerHandling(Customer *customer)
{
    CustomerHandler *customerHandler = new CustomerHandler();
    customerHandler->add(new ValletHandler());
    customerHandler->add(new AssignTable(tables));
    customerHandler->handleRequest(customer);
}

void Restaurant::addWaiter(Waiter *waiter)
{
    waiters.push_back(waiter);
}

Restaurant::~Restaurant()
{
}