#include "CompositeBill.h"

using namespace std;

CompositeBill::CompositeBill()
{
}

void CompositeBill::printBill()
{
    double total = 0;

    total = getBillTotal();
    cout<<"Total: R"<<total<<endl << "[";

	vector<Bill*>:: iterator it;
	for (it = tableBills.begin(); it != tableBills.end(); ++it)
		(*it)->printBill();
	cout << "]" << endl;
}

void CompositeBill::addPerson(Bill *bill)
{
    this->tableBills.push_back(bill);
}

void CompositeBill::removePerson(Bill *bill)
{
    //tableBills.erase(remove(tableBills.begin(), tableBills.end(), bill), tableBills.end());
}

double CompositeBill::getBillTotal()
{
    double total = 0;
    vector<Bill*>:: iterator it;
	for (it = tableBills.begin(); it != tableBills.end(); ++it){
        total += (*it)->getBillTotal();
    }
    return total;
}

Order *CompositeBill::getOrder()
{
    return nullptr;
}

CompositeBill::~CompositeBill()
{
}