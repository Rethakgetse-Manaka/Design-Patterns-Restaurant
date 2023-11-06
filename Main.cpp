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
#include "AccountingSystem.h"
#include "RestaurantObserver.h"
#include "Inventory.h"
#include "Transaction.h"
#include <vector>
using namespace std;

// void testBill(){
//     Customer *c = new Customer(1, "John");
//     Customer *c2 = new Customer(2, "Jane");
//     cout<<"Testing the Bill for a customer: "<<endl << endl;
//     c->placeOrder();
//     c2->placeOrder();
//     Bill* b = new CompositeBill();
//     Bill* b1 = new LeafBill(c2->getOrder(), c2->getTip());
//     Bill* b2 = new LeafBill(c->getOrder(), c->getTip());
//     b->addPerson(b1);
//     b->addPerson(b2);
//     b->printBill();
//     b->removePerson(1);
//     b->printBill();
//     delete c;
//     delete c2;
//     delete b;
// }

// void testOrderPlacing(){
//     Customer *c = new Customer(1, "John");
//     Customer *c2 = new Customer(2, "Jane");
//     cout<<"Testing the Menu for a customer: "<<endl;
//     c->placeOrder();
//     cout<<endl;
//     cout<<endl;
//     c2->placeOrder();
//     cout<<endl;
//     cout<<endl;
//     delete c;
//     delete c2;
// }

// void testCustomerState(){
//     Customer *c = new Customer(1, "John");
//     cout<< "Testing out the state of the customer" << endl;
//     c->eat();
//     c->complain();
//     c->resolveComplaint();
//     cout<<endl;
//     cout<<endl;
//     delete c;
// }

// void testManagerVisitor(){
//     TableVisitor *cManager = new ComplaintsManager();
//     TableVisitor *aManager = new AdminManager();
//     cout<< "Testing out the visitor pattern for the managers" << endl;
//     vector<Customer*> customers;
//     customers.push_back(new Customer(1, "John"));
//     customers.push_back(new Customer(2, "Jane"));
//     customers.push_back(new Customer(3, "Jack"));
//     customers.push_back(new Customer(4, "Jill"));

//     for(int i = 0; i < (int)customers.size(); i++){
//         customers[i]->accept(cManager);
//     }

//     for(int i = 0; i < (int)customers.size(); i++){
//         customers[i]->accept(aManager);
//     }
//     delete cManager;
//     delete aManager;
//     for(int i = 0; i < (int)customers.size(); i++){
//         delete customers[i];
//     }
//     customers.clear();
// }

// void testBillPayment(){
//     cout<<"Unit testing eat function." << endl;
//     Customer* newCustomer = new Customer(1, "John");
//     Bill* b1 = new LeafBill(newCustomer->getOrder(), newCustomer->getTip());
//     Inventory* inventory = new Inventory();
//     AccountingSystem* accountingSystem = new AccountingSystem(inventory);
//     accountingSystem->setBalance(35000000);
//     Observer* restaurantObserver = new RestaurantObserver(inventory, accountingSystem);
//     inventory->registerObserver(restaurantObserver);
//     inventory->addStock(new Item(new FoodItem("Beef Kebab", 50.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Green Salad", 30.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Ramen", 35.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Wings", 65.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Fries", 32.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0));

//      std::time_t now = std::time(nullptr);
//     std::tm* localTime = std::localtime(&now);
//     std::stringstream ss;
//     ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
//     Transaction* t1 = new Transaction(new Item(new FoodItem("Beef Kebab", 50.0),50,0),50*50,TransactionType::PURCHASE,ss.str());
//     Transaction* t2 = new Transaction(new Item(new FoodItem("Green Salad", 30.0),50,0),50*30,TransactionType::PURCHASE,ss.str());
//     Transaction* t3 = new Transaction(new Item(new FoodItem("Ramen", 35.0),50,0),50*35,TransactionType::PURCHASE,ss.str());
//     Transaction* t4 = new Transaction(new Item(new FoodItem("Wings", 65.0),50,0),50*65,TransactionType::PURCHASE,ss.str());
//     Transaction* t5 = new Transaction(new Item(new FoodItem("Fries", 32.0),50,0),50*32,TransactionType::PURCHASE,ss.str());
//     Transaction* t6 = new Transaction(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0),50*89,TransactionType::PURCHASE,ss.str());
//     Transaction* t7 = new Transaction(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0),50*65,TransactionType::PURCHASE,ss.str());
//     Transaction* t8 = new Transaction(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0),50*72,TransactionType::PURCHASE,ss.str());
//     Transaction* t9 = new Transaction(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0),50*90,TransactionType::PURCHASE,ss.str());
//     Transaction* t10 = new Transaction(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0),50*85,TransactionType::PURCHASE,ss.str());

//     accountingSystem->recordTransaction(t1);
//     accountingSystem->recordTransaction(t2);
//     accountingSystem->recordTransaction(t3);
//     accountingSystem->recordTransaction(t4);
//     accountingSystem->recordTransaction(t5);
//     accountingSystem->recordTransaction(t6);
//     accountingSystem->recordTransaction(t7);
//     accountingSystem->recordTransaction(t8);
//     accountingSystem->recordTransaction(t9);
//     accountingSystem->recordTransaction(t10);
//     newCustomer->payBill(b1, accountingSystem);
// }

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

// void testInitialCustomerHandling(){
//     Customer* customer = new Customer(1, "John");
//     vector<Table*> tables;
//     tables.push_back(new Table(1));
//     CustomerHandler *customerHandler = new CustomerHandler();
//     customerHandler->add(new ValletHandler());
//     customerHandler->add(new AssignTable(tables));
//     customerHandler->handleRequest(customer);
//     delete customer;
//     delete customerHandler;
//     for(int i = 0; i < (int)tables.size(); i++){
//         delete tables[i];
//     }
//     tables.clear();
// }

// // void testPayBill2(){
// //     Inventory* inventory = new Inventory();
// //     AccountingSystem* accountingSystem = new AccountingSystem(inventory);
// //     accountingSystem->setBalance(35000000);
// //     Observer* restaurantObserver = new RestaurantObserver(inventory, accountingSystem);
// //     inventory->registerObserver(restaurantObserver);
// //     inventory->addStock(new Item(new FoodItem("Beef Kebab", 50.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Green Salad", 30.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Ramen", 35.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Wings", 65.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Fries", 32.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0));

// //      std::time_t now = std::time(nullptr);
// //     std::tm* localTime = std::localtime(&now);
// //     std::stringstream ss;
// //     ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
// //     Transaction* t1 = new Transaction(new Item(new FoodItem("Beef Kebab", 50.0),50,0),50*50,TransactionType::PURCHASE,ss.str());
// //     Transaction* t2 = new Transaction(new Item(new FoodItem("Green Salad", 30.0),50,0),50*30,TransactionType::PURCHASE,ss.str());
// //     Transaction* t3 = new Transaction(new Item(new FoodItem("Ramen", 35.0),50,0),50*35,TransactionType::PURCHASE,ss.str());
// //     Transaction* t4 = new Transaction(new Item(new FoodItem("Wings", 65.0),50,0),50*65,TransactionType::PURCHASE,ss.str());
// //     Transaction* t5 = new Transaction(new Item(new FoodItem("Fries", 32.0),50,0),50*32,TransactionType::PURCHASE,ss.str());
// //     Transaction* t6 = new Transaction(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0),50*89,TransactionType::PURCHASE,ss.str());
// //     Transaction* t7 = new Transaction(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0),50*65,TransactionType::PURCHASE,ss.str());
// //     Transaction* t8 = new Transaction(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0),50*72,TransactionType::PURCHASE,ss.str());
// //     Transaction* t9 = new Transaction(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0),50*90,TransactionType::PURCHASE,ss.str());
// //     Transaction* t10 = new Transaction(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0),50*85,TransactionType::PURCHASE,ss.str());

// //     accountingSystem->recordTransaction(t1);
// //     accountingSystem->recordTransaction(t2);
// //     accountingSystem->recordTransaction(t3);
// //     accountingSystem->recordTransaction(t4);
// //     accountingSystem->recordTransaction(t5);
// //     accountingSystem->recordTransaction(t6);
// //     accountingSystem->recordTransaction(t7);
// //     accountingSystem->recordTransaction(t8);
// //     accountingSystem->recordTransaction(t9);
// //     accountingSystem->recordTransaction(t10);
// //     Customer *c = new Customer(1, "John");
// //     Customer *c2 = new Customer(2, "Jane");
// //     TabCaretaker* tabCaretaker = new TabCaretaker();
// //     OrderMediator* mediator = new RestaurantOrderMediator();
// //     Table* t = new Table(1);
// //     t->setCaretaker(tabCaretaker);
// //     t->addCustomer(c);
// //     t->addCustomer(c2);
// //     Waiter* waiter = new Waiter("Sam");
// //     c->setTable(t);
// //     c2->setTable(t);
// //     t->setWaiter(waiter);
// //     waiter->setMediator(mediator);
// //     waiter->addTable(t);
// //     c->setTableID(1);
// //     c2->setTableID(1);

// //     c->placeOrder();
// //     c2->placeOrder();
// //     cout<<"Testing the Bill for a customer: "<<endl << endl;
// //     t->readyForBill(waiter, accountingSystem);
// //     delete c;
// //     delete c2;

// // }

// // void testAccountSystem(){
// //     Inventory* inventory = new Inventory();
// //     AccountingSystem* accountingSystem = new AccountingSystem(inventory);
// //     accountingSystem->setBalance(3500000);
// //     Observer* restaurantObserver = new RestaurantObserver(inventory, accountingSystem);
// //     inventory->registerObserver(restaurantObserver);
// //     inventory->addStock(new Item(new FoodItem("Beef Kebab", 50.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Green Salad", 30.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Ramen", 35.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Wings", 65.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Fries", 32.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0));

// // void testInitialCustomerHandling(){
// //     Customer* customer = new Customer(1, "John");
// //     vector<Table*> tables;
// //     tables.push_back(new Table(1));
// //     CustomerHandler *customerHandler = new CustomerHandler();
// //     customerHandler->add(new ValletHandler());
// //     customerHandler->add(new AssignTable(tables));
// //     customerHandler->handleRequest(customer);
// //     delete customer;
// //     delete customerHandler;
// //     for(int i = 0; i < (int)tables.size(); i++){
// //         delete tables[i];
// //     }
// //     tables.clear();
// //}

// // void testPayBill2(){
// //     Inventory* inventory = new Inventory();
// //     AccountingSystem* accountingSystem = new AccountingSystem(inventory);
// //     accountingSystem->setBalance(35000000);
// //     Observer* restaurantObserver = new RestaurantObserver(inventory, accountingSystem);
// //     inventory->registerObserver(restaurantObserver);
// //     inventory->addStock(new Item(new FoodItem("Beef Kebab", 50.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Green Salad", 30.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Ramen", 35.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Wings", 65.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Fries", 32.0),50,0));
// //     inventory->addStock(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0));
// //     inventory->addStock(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0));

// //      std::time_t now = std::time(nullptr);
// //     std::tm* localTime = std::localtime(&now);
// //     std::stringstream ss;
// //     ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
// //     Transaction* t1 = new Transaction(new Item(new FoodItem("Beef Kebab", 50.0),50,0),50*50,TransactionType::PURCHASE,ss.str());
// //     Transaction* t2 = new Transaction(new Item(new FoodItem("Green Salad", 30.0),50,0),50*30,TransactionType::PURCHASE,ss.str());
// //     Transaction* t3 = new Transaction(new Item(new FoodItem("Ramen", 35.0),50,0),50*35,TransactionType::PURCHASE,ss.str());
// //     Transaction* t4 = new Transaction(new Item(new FoodItem("Wings", 65.0),50,0),50*65,TransactionType::PURCHASE,ss.str());
// //     Transaction* t5 = new Transaction(new Item(new FoodItem("Fries", 32.0),50,0),50*32,TransactionType::PURCHASE,ss.str());
// //     Transaction* t6 = new Transaction(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0),50*89,TransactionType::PURCHASE,ss.str());
// //     Transaction* t7 = new Transaction(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0),50*65,TransactionType::PURCHASE,ss.str());
// //     Transaction* t8 = new Transaction(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0),50*72,TransactionType::PURCHASE,ss.str());
// //     Transaction* t9 = new Transaction(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0),50*90,TransactionType::PURCHASE,ss.str());
// //     Transaction* t10 = new Transaction(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0),50*85,TransactionType::PURCHASE,ss.str());

// //     accountingSystem->recordTransaction(t1);
// //     accountingSystem->recordTransaction(t2);
// //     accountingSystem->recordTransaction(t3);
// //     accountingSystem->recordTransaction(t4);
// //     accountingSystem->recordTransaction(t5);
// //     accountingSystem->recordTransaction(t6);
// //     accountingSystem->recordTransaction(t7);
// //     accountingSystem->recordTransaction(t8);
// //     accountingSystem->recordTransaction(t9);
// //     accountingSystem->recordTransaction(t10);
// //     Customer *c = new Customer(1, "John");
// //     Customer *c2 = new Customer(2, "Jane");
// //     TabCaretaker* tabCaretaker = new TabCaretaker();
// //     OrderMediator* mediator = new RestaurantOrderMediator();
// //     Table* t = new Table(1);
// //     t->setCaretaker(tabCaretaker);
// //     t->addCustomer(c);
// //     t->addCustomer(c2);
// //     Waiter* waiter = new Waiter("Sam");
// //     c->setTable(t);
// //     c2->setTable(t);
// //     t->setWaiter(waiter);
// //     waiter->setMediator(mediator);
// //     waiter->addTable(t);
// //     c->setTableID(1);
// //     c2->setTableID(1);

// //     c->placeOrder();
// //     c2->placeOrder();
// //     cout<<"Testing the Bill for a customer: "<<endl << endl;
// //     t->readyForBill(waiter, accountingSystem);
// //     delete c;
// //     delete c2;

// // }

// void testAccountSystem(){
//     Inventory* inventory = new Inventory();
//     AccountingSystem* accountingSystem = new AccountingSystem(inventory);
//     accountingSystem->setBalance(3500000);
//     Observer* restaurantObserver = new RestaurantObserver(inventory, accountingSystem);
//     inventory->registerObserver(restaurantObserver);
//     inventory->addStock(new Item(new FoodItem("Beef Kebab", 50.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Green Salad", 30.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Ramen", 35.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Wings", 65.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Fries", 32.0),50,0));
//     inventory->addStock(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0));
//     inventory->addStock(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0));

//      std::time_t now = std::time(nullptr);
//     std::tm* localTime = std::localtime(&now);
//     std::stringstream ss;
//     ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
//     Transaction* t1 = new Transaction(new Item(new FoodItem("Beef Kebab", 50.0),50,0),50*50,TransactionType::PURCHASE,ss.str());
//     Transaction* t2 = new Transaction(new Item(new FoodItem("Green Salad", 30.0),50,0),50*30,TransactionType::PURCHASE,ss.str());
//     Transaction* t3 = new Transaction(new Item(new FoodItem("Ramen", 35.0),50,0),50*35,TransactionType::PURCHASE,ss.str());
//     Transaction* t4 = new Transaction(new Item(new FoodItem("Wings", 65.0),50,0),50*65,TransactionType::PURCHASE,ss.str());
//     Transaction* t5 = new Transaction(new Item(new FoodItem("Fries", 32.0),50,0),50*32,TransactionType::PURCHASE,ss.str());
//     Transaction* t6 = new Transaction(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0),50*89,TransactionType::PURCHASE,ss.str());
//     Transaction* t7 = new Transaction(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0),50*65,TransactionType::PURCHASE,ss.str());
//     Transaction* t8 = new Transaction(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0),50*72,TransactionType::PURCHASE,ss.str());
//     Transaction* t9 = new Transaction(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0),50*90,TransactionType::PURCHASE,ss.str());
//     Transaction* t10 = new Transaction(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0),50*85,TransactionType::PURCHASE,ss.str());

//     accountingSystem->recordTransaction(t1);
//     accountingSystem->recordTransaction(t2);
//     accountingSystem->recordTransaction(t3);
//     accountingSystem->recordTransaction(t4);
//     accountingSystem->recordTransaction(t5);
//     accountingSystem->recordTransaction(t6);
//     accountingSystem->recordTransaction(t7);
//     accountingSystem->recordTransaction(t8);
//     accountingSystem->recordTransaction(t9);
//     accountingSystem->recordTransaction(t10);

//     accountingSystem->generateReport();
//     Customer *c = new Customer(1, "John");
//     Customer *c2 = new Customer(2, "Jane");
//     OrderMediator* mediator = new RestaurantOrderMediator();
//     mediator->setInventory(inventory);
//     Table* t = new Table(1);
//     t->addCustomer(c);
//     Waiter* waiter = new Waiter("Sam");
//     c->setTable(t);
//     t->setWaiter(waiter);
//     waiter->setMediator(mediator);
//     waiter->addTable(t);
//     c->setTableID(1);

//     c->placeOrder();
//     cout<<"Testing the Bill for a customer: "<<endl << endl;
//     t->readyForBill(waiter, accountingSystem);
//     accountingSystem->generateReport();
//     delete c;
//     delete c2;
//     delete accountingSystem;

// }
// int main()
// {
    //testOrderPlacing();
    //testBill();
    // testCustomerState();
    //testManagerVisitor();
    // testInitialCustomerHandling();
    //testEat();
    //testComplain();
    //testAccountSystem();
    //testPayBill2();
//     return 0;
// }
