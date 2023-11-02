#include "Table.h"
//#include "Waiter.h"
#include "Customer.h"

std::vector<Order*> Table::getOrders()
{
    return orders;
}

void Table::addCustomer(Customer *c)
{
    customers.push_back(c);
    c->setTableID(tableNumber);
    
}

void Table::removeCustomer(Customer *c)
{

    customers.erase(std::remove(customers.begin(), customers.end(), c), customers.end());



}

// void Table::readyForBill(Waiter* w)
// {

//     std::cout << "Table "<<tableNumber<<" is ready for a bill...";
//     w->presentBill(this);
// }

// void Table::placeOrder(Order* o,Waiter* w)
// {
//     std::cout << w->getName() <<" is the waiter taking the order from "<<o->getCustomerName() << " at table "<<tableNumber;
//     w->receiveOrder(o);
// }

void Table::setBill(Bill *b)
{
    bill = b;
}

Bill *Table::getBill()
{
    return bill;
}

void Table::setTableNumber(int tb)
{
    tableNumber = tb;
}

int Table::getTableNumber()
{
    return tableNumber;
}