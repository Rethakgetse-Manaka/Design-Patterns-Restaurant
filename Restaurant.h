#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "TableVisitor.h"
#include "Customer.h"
#include "CustomerHandler.h"
#include"ValletHandler.h"
#include "AssignTable.h"
#include "Table.h"
#include "Bill.h"
#include <vector>
#include <iostream>

class Restaurant
{
private:
    std::vector<Table*> tables;
public:
    Restaurant(/* args */);
    void initialCustomerHandling(Customer *customer);

    ~Restaurant();
};

#endif