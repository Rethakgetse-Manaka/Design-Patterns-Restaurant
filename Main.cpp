#include <iostream>
#include "Customer.h"
#include "Bill.h"
#include "CompositeBill.h"
#include "LeafBill.h"
using namespace std;

void testBill(){
    Customer *c = new Customer(1, "John");
    Customer *c2 = new Customer(2, "Jane");
    cout<<"Testing the Bill for a customer: "<<endl << endl;
    c->placeOrder();
    c2->placeOrder();
    Bill* b = new CompositeBill();
    Bill* b1 = new LeafBill(c2->getOrder(), c2->getTip());
    Bill* b2 = new LeafBill(c->getOrder(), c->getTip());
    b->addPerson(b1);
    b->addPerson(b2);
    b->printBill();
    b->removePerson(1);
    b->printBill();
    delete c;
    delete c2;
    delete b;
}

void testOrderPlacing(){
    Customer *c = new Customer(1, "John");
    Customer *c2 = new Customer(2, "Jane");
    cout<<"Testing the Menu for a customer: "<<endl;
    c->placeOrder();
    cout<<endl;
    cout<<endl;
    c2->placeOrder();
    cout<<endl;
    cout<<endl;
    delete c;
    delete c2;
}

void testCustomerState(){
    Customer *c = new Customer(1, "John");
    cout<< "Testing out the state of the customer" << endl;
    c->eat();
    c->complain();
    c->resolveComplaint();
    cout<<endl;
    cout<<endl;
    delete c;
}
int main()
{
    testOrderPlacing();
    // testBill();
    // testCustomerState();
    return 0;
}