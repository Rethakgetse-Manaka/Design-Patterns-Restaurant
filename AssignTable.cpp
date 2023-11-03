#include "AssignTable.h"

using namespace std;

AssignTable::AssignTable(std::vector<Table*> tables)
{
    this->tables = tables;
}

void AssignTable::handleRequest(Customer *customer)
{
    // for (int i = 0; i < tables.size(); i++)
    // {
    //     if (tables[i]->isAvailable())
    //     {
    //         tables[i]->setCustomer(customer);
    //         cout << customer->getCustomerName() <<  "was assigned to Table " << tables[i]->getTableNumber() << endl;
    //         return;
    //     }
    // }
    // cout << "No table available at the moment." << endl;
}

AssignTable::~AssignTable()
{
}