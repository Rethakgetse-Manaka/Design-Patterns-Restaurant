#include <iostream>
#include "Customer.h"
#include "Bill.h"
#include "CompositeBill.h"
#include "LeafBill.h"
#include "TableVisitor.h"
#include "ComplaintsManager.h"
#include "AdminManager.h"
#include "CustomerHandler.h"
#include "ValletHandler.h"
#include "AssignTable.h"
#include <vector>
using namespace std;

void testFindBill(){
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
    Bill* found = b->findBill(2);
    found->printBill();
    delete c;
    delete c2;
    delete b;
}
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

void testManagerVisitor(){
    TableVisitor *cManager = new ComplaintsManager();
    TableVisitor *aManager = new AdminManager();
    cout<< "Testing out the visitor pattern for the managers" << endl;
    vector<Customer*> customers;
    customers.push_back(new Customer(1, "John"));
    customers.push_back(new Customer(2, "Jane"));
    customers.push_back(new Customer(3, "Jack"));
    customers.push_back(new Customer(4, "Jill"));

    for(int i = 0; i < (int)customers.size(); i++){
        customers[i]->accept(cManager);
    }

    for(int i = 0; i < (int)customers.size(); i++){
        customers[i]->accept(aManager);
    }
    delete cManager;
    delete aManager;
    for(int i = 0; i < (int)customers.size(); i++){
        delete customers[i];
    }
    customers.clear();
}

void testBillPayment(){
    cout<<"Unit testing eat function." << endl;
    Customer* newCustomer = new Customer(1, "John");
    Bill* b1 = new LeafBill(newCustomer->getOrder(), newCustomer->getTip());
    newCustomer->payBill(b1);
}

void testEat(){
    cout<<"Unit testing eat function." << endl;
    Customer* newCustomer = new Customer(1, "John");
    newCustomer->eat();
    delete newCustomer;
}

void testComplain(){
    cout<<"Unit testing complain function." << endl;
    Customer* newCustomer = new Customer(1, "John");
    newCustomer->complain();
    delete newCustomer;
}

void testInitialCustomerHandling(){
    Customer* customer = new Customer(1, "John");
    vector<Table*> tables;
    tables.push_back(new Table());
    
    CustomerHandler *customerHandler = new CustomerHandler();
    customerHandler->add(new ValletHandler());
    customerHandler->add(new AssignTable(tables));
    customerHandler->handleRequest(customer);
    delete customer;
    delete customerHandler;
    for(int i = 0; i < (int)tables.size(); i++){
        delete tables[i];
    }
    tables.clear();
}
int main()
{
    //testOrderPlacing();
    //testBill();
    // testCustomerState();
    //testManagerVisitor();
    //testInitialCustomerHandling();
    testFindBill();
    testEat();
    testComplain();
    return 0;
}