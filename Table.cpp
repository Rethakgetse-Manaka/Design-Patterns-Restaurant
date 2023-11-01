#include "Table.h"
#include "Waiter.h"

std::vector<Order*> Table::getOrders()
{
    return orders;
}

void Table::readyForBill(Waiter* w)
{
    std::cout << "Table "<<tableNumber<<" is ready for a bill...";
    w->presentBill(this);
}

void Table::placeOrder(Order* o,Waiter* w)
{
    std::cout << w->getName() <<" is the waiter taking the order from "<<o->getCustomerName() << " at table "<<tableNumber;
    w->receiveOrder(o);
}