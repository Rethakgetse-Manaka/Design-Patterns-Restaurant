#include "AssignTable.h"

using namespace std;

AssignTable::AssignTable(std::vector<Table*> tables)
{
    this->tables = tables;
}

void AssignTable::handleRequest(Customer *customer)
{
    // cout << "Assigning table to " << customer->getCustomerName() << "..." <<endl << endl;
    for (int i = 0; i < (int) tables.size(); i++)
    {
        if (tables[i]->isFree())
        {
            tables[i]->addCustomer(customer);
            customer->setTableID(tables[i]->getTableNumber());
            customer->setTable(tables[i]);
            cout << customer->getCustomerName() <<  " was assigned to Table " << tables[i]->getTableNumber() << endl;
            return;
        }
    }
    cout << "No table available at the moment." << endl;
}

AssignTable::~AssignTable()
{
}