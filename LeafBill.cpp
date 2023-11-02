#include "LeafBill.h"

using namespace std;

LeafBill::LeafBill(Order* ord)
{
    this->order = ord;
}

Order *LeafBill::getOrder()
{
    return this->order;
}

double LeafBill::getBillTotal()
{
    return this->order->getTotal();
}

void LeafBill::printBill()
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
    cout<<"Total: R"<<total<<endl;

}

LeafBill::~LeafBill()
{
}