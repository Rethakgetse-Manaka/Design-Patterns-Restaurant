#include <iostream>
#include "Customer.h"
#include "Bill.h"
#include "CompositeBill.h"
#include "LeafBill.h"
using namespace std;

int main()
{
    Customer *c = new Customer(1, "John");
    Customer *c2 = new Customer(2, "Jane");
    cout<<"Testing the Menu for a customer: "<<endl;
    c->placeOrder();
    cout<<endl;
    cout<<endl;
    c2->placeOrder();
    cout<<endl;
    cout<<endl;
    cout<< "Testing out the state of the customer" << endl;
    c->eat();
    c->complain();
    c->resolveComplaint();
    cout<<endl;
    cout<<endl;
    cout<<"Testing the Bill for a customer: "<<endl << endl;
    
    Bill* b = new CompositeBill();
    Bill* b1 = new LeafBill(c2->getOrder());
    Bill* b2 = new LeafBill(c->getOrder());
    b->addPerson(b1);
    b->addPerson(b2);
    b->printBill();
    return 0;
}