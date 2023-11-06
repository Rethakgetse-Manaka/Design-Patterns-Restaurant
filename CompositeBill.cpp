#include "CompositeBill.h"

using namespace std;

CompositeBill::CompositeBill()
{
}

void CompositeBill::printBill()
{
    double total = 0;

    total = getBillTotal();
    cout<<"Total: R"<<total<<endl;

	vector<Bill*>:: iterator it;
	for (it = tableBills.begin(); it != tableBills.end(); ++it){
        (*it)->printBill();
    }
}

Bill *CompositeBill::findBill(int customer)
{
    vector<Bill*>:: iterator it;
	for (it = tableBills.begin(); it != tableBills.end(); ++it){
        if ((*it)->getOrder()->getCustomerID() == customer) {
            return *it;
        }
    }
    return nullptr;
}

void CompositeBill::addPerson(Bill *bill)
{
    this->tableBills.push_back(bill);
}

void CompositeBill::removePerson(int customer)
{
    for (vector<Bill*>::iterator it = tableBills.begin(); it != tableBills.end(); ++it) {
        if ((*it)->getOrder()->getCustomerID() == customer) {
            // Match found, erase the bill from the vector
            delete *it; // If Bill object owns any resources, delete them first
            tableBills.erase(it);
            break; // Exit the loop once the first match is removed
        }
    }
}

double CompositeBill::getBillTotal()
{
    double total = 0;
    vector<Bill*>::iterator it;
	for (it = tableBills.begin(); it != tableBills.end(); ++it){
        total += (*it)->getBillTotal();
    }
    return total;
}

Order *CompositeBill::getOrder()
{
    cout << "Hello it's me i'm null" << endl;
    return nullptr;
}

CompositeBill::~CompositeBill()
{
    vector<Bill*>:: iterator it;
  
  for (it = tableBills.begin(); it != tableBills.end(); ++it){
    delete *it;
  }
}