#include "LeafBill.h"

using namespace std;

LeafBill::LeafBill(Order* ord, double tip)
{
    this->order = ord;
    this->tip = tip;
}

void LeafBill::setTip(double tip)
{
    this->tip = tip;
}

double LeafBill::getTip()
{
    return this->tip;
}

Bill *LeafBill::findBill(int customer)
{
    return nullptr;
}

Order *LeafBill::getOrder()
{
    return this->order;
}

double LeafBill::getBillTotal()
{
    return this->order->getTotal()+tip;
}

void LeafBill::printBill()
{
    double foodTotal = 0, drinkTot = 0, total = 0;
    cout<<"Thank You for your order, "<<order->getCustomerName()<<endl;
    cout<<"Your bill is as follows:"<<endl;
    cout<<"|---------------------------------------|"<<endl;
    cout<<"|Food Items:" << setw(29) << right << "|" << endl;
    for(int i = 0; i < (int)order->getFoodItems().size(); i++)
    {
        cout << setw(40) << left << order->getFoodItems()[i]->toString() << right << "|" << endl;
        foodTotal += order->getFoodItems()[i]->getPrice();
    }
    cout<<"|---------------------------------------|"<<endl;
    cout<<"|Drinks:--------------------------------|"<<endl;
    for(int i = 0; i < (int)order->getDrinks().size(); i++)
    {
        cout << setw(40) << left << order->getDrinks()[i]->toString() << right << "|" << endl;
        drinkTot += order->getDrinks()[i]->getPrice();
    }
    cout<<"|---------------------------------------|"<<endl;
    total = foodTotal + drinkTot;
    cout<<"|Tip: " << setw(35) << right << "|" << endl;
    cout<<"| R" << setw(37) << left <<tip << right << "|" << endl;
    cout<<"|---------------------------------------|"<<endl;
    cout<<"|TOTAL: R" << setw(31) << left << total+tip << right << "|" <<endl;
    cout<<"|---------------------------------------|"<<endl;

}

LeafBill::~LeafBill()
{
}