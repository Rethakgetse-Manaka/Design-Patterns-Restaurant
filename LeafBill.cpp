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
    cout<<"----------------------------------------------"<<endl;
    cout<<"Food Items:"<<endl;
    for(int i = 0; i < (int)order->getFoodItems().size(); i++)
    {
        cout<<order->getFoodItems()[i]->toString() << endl;
        foodTotal += order->getFoodItems()[i]->getPrice();
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
    cout<<"Tip: "<<endl;
    cout<<"R"<<tip<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Total: R"<<total<<endl;

}

LeafBill::~LeafBill()
{
}