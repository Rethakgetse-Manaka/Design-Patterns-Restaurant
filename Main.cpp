#include <iostream>
#include "Customer.h"

using namespace std;

int main()
{
    Customer *c = new Customer(1, "John");
    cout<<"Testing the Menu for a customer: "<<endl;
    c->menu();
    cout<< "Testing out the state of the customer" << endl;
    c->eat();
    c->complain();
    c->resolveComplaint();
    return 0;
}