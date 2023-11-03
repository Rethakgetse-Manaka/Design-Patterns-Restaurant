#ifndef ASSIGNTABLE_H
#define ASSIGNTABLE_H

#include "CustomerHandler.h"
#include "Table.h"
#include <vector>
#include <iostream>
class AssignTable: public CustomerHandler
{
private:
    std::vector<Table*> tables;
public:
    AssignTable(std::vector<Table*> tables);
    void handleRequest(Customer* customer);
    virtual ~AssignTable();
};



#endif