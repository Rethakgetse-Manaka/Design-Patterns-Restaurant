#include "CompositeBill.h"

using namespace std;

CompositeBill::CompositeBill(Order* ord)
{
    this->order = ord;
}

void CompositeBill::printBill()
{
    double foodTotal = 0, drinkTot = 0, total = 0;
    cout<<"Thank You for your order, "<<order->getCustomerName()<<endl;
    cout<<"Your bill is as follows:"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Food Items:"<<endl;
    for(int i = 0; i < (int)order->getItems().size(); i++)
    {
        cout<<order->getItems()[i]->toString() << endl;
        foodTotal += order->getItems()[i]->getPrice();
    }
    cout<<"----------------------------------------------"<<endl;
    cout<<"Drinks:"<<endl;
    // for(int i = 0; i < order->getDrinks().size(); i++)
    // {
    //     cout<<order->getDrinks()[i]->toString() << endl;
    //     drinkTot += order->getDrinks()[i]->getPrice();
    // }
    cout<<"----------------------------------------------"<<endl;
    total = foodTotal + drinkTot;
    cout<<"Total: R"<<total<<endl << "[";

	vector<Bill*>:: iterator it;
	for (it = tableBills.begin(); it != tableBills.end(); ++it)
		(*it)->printBill();
	cout << "]";
}

void CompositeBill::addPerson(Bill *bill)
{
    this->tableBills.push_back(bill);
}

void CompositeBill::removePerson(Bill *bill)
{
    //tableBills.erase(remove(tableBills.begin(), tableBills.end(), bill), tableBills.end());
}

CompositeBill::~CompositeBill()
{
}