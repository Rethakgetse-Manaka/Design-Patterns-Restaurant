#include "RestaurantOrderMediator.h"
#include "Waiter.h"
#include "GrillChef.h"
#include "FryCook.h"
#include "PastaChef.h"
#include "RotisseurChef.h"
#include "VegetableChef.h"
#include "FoodItem.h"
#include "Plate.h"
#include "BeefKebab.h"
#include "BeefBurger.h"
#include "Wings.h"
#include "FriedMeal.h"
#include "Ramen.h"
#include "Alfredo.h"
#include "ChickenSalad.h"
#include "ChickenBurger.h"
#include "GreenSalad.h"
#include "StirFry.h"
#include "Customer.h"
#include "TableState.h"
#include "Table.h"
#include "Waiter.h"
#include "Valet.h"
#include "ValletHandler.h"
#include "ValetFactoryImpl.h"
#include "Restaurant.h"
#include "CocktailDecorator.h"
#include "SpecificCocktail.h"
#include "BaseCocktail.h"
#include "Order.h"
#include "TableVisitor.h"
#include "ComplaintsManager.h"
#include "AdminManager.h"

#include <iostream>

const std::string RED_COLOR = "\x1B[31m";
const std::string GREEN_COLOR = "\x1B[32m";
const std::string RESET_COLOR = "\x1B[0m"; // Reset color to default


using namespace std;

int main() {
    cout << GREEN_COLOR << "all files compiled successfully" << RESET_COLOR << endl;

    

    Inventory* inventory = new Inventory();
    AccountingSystem* accountingSystem = new AccountingSystem(inventory);
    accountingSystem->setBalance(3500000);
    Observer* restaurantObserver = new RestaurantObserver(inventory, accountingSystem);
    inventory->registerObserver(restaurantObserver);
    inventory->addStock(new Item(new FoodItem("Beef Kebab", 50.0),50,0));
    inventory->addStock(new Item(new FoodItem("Green Salad", 30.0),50,0));
    inventory->addStock(new Item(new FoodItem("Ramen", 35.0),50,0));
    inventory->addStock(new Item(new FoodItem("Wings", 65.0),50,0));
    inventory->addStock(new Item(new FoodItem("Fries", 32.0),50,0));
    inventory->addStock(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0));
    inventory->addStock(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0));
    inventory->addStock(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0));
    inventory->addStock(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0));
    inventory->addStock(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0));

     std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);
    std::stringstream ss;
    ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
    Transaction* t1 = new Transaction(new Item(new FoodItem("Beef Kebab", 50.0),50,0),50*50,TransactionType::PURCHASE,ss.str());
    Transaction* t2 = new Transaction(new Item(new FoodItem("Green Salad", 30.0),50,0),50*30,TransactionType::PURCHASE,ss.str());
    Transaction* t3 = new Transaction(new Item(new FoodItem("Ramen", 35.0),50,0),50*35,TransactionType::PURCHASE,ss.str());
    Transaction* t4 = new Transaction(new Item(new FoodItem("Wings", 65.0),50,0),50*65,TransactionType::PURCHASE,ss.str());
    Transaction* t5 = new Transaction(new Item(new FoodItem("Fries", 32.0),50,0),50*32,TransactionType::PURCHASE,ss.str());
    Transaction* t6 = new Transaction(new Item(new FoodItem("Beef Burger", false, false, 89.0, false),50,0),50*89,TransactionType::PURCHASE,ss.str());
    Transaction* t7 = new Transaction(new Item(new FoodItem("Chicken Burger", false, false, 65.0, false),50,0),50*65,TransactionType::PURCHASE,ss.str());
    Transaction* t8 = new Transaction(new Item(new FoodItem("Stirfry", false, false, 72.0, false),50,0),50*72,TransactionType::PURCHASE,ss.str());
    Transaction* t9 = new Transaction(new Item(new FoodItem("Alfredo", false, false, 90.0, false),50,0),50*90,TransactionType::PURCHASE,ss.str());
    Transaction* t10 = new Transaction(new Item(new FoodItem("Fried Meal", false, false, 85.0, false),50,0),50*85,TransactionType::PURCHASE,ss.str());

    accountingSystem->recordTransaction(t1);
    accountingSystem->recordTransaction(t2);
    accountingSystem->recordTransaction(t3);
    accountingSystem->recordTransaction(t4);
    accountingSystem->recordTransaction(t5);
    accountingSystem->recordTransaction(t6);
    accountingSystem->recordTransaction(t7);
    accountingSystem->recordTransaction(t8);
    accountingSystem->recordTransaction(t9);
    accountingSystem->recordTransaction(t10);

    accountingSystem->generateReport();




    Restaurant* restuarant = new Restaurant();
    restuarant->setAccountingSystem(accountingSystem);
    OrderMediator* kitchenMediator = new RestaurantOrderMediator();
    TabCaretaker* careTaker = new TabCaretaker();
    kitchenMediator->setInventory(inventory);
    Table* table1 = new Table(1);
    Table* table2 = new Table(2);
    Table* table3 = new Table(3);

    table1->setCaretaker(careTaker);
    table2->setCaretaker(careTaker);
    table3->setCaretaker(careTaker);

    Waiter* waiter1 = new Waiter("John");
    Waiter* waiter2 = new Waiter("Jack");
    Waiter* waiter3 = new Waiter("Jill");

    waiter1->addTable(table1);
    table1->setWaiter(waiter1);
    waiter2->addTable(table2);
    table2->setWaiter(waiter2);
    waiter3->addTable(table3);
    table3->setWaiter(waiter3);

    waiter1->setMediator(kitchenMediator);
    waiter2->setMediator(kitchenMediator);
    waiter3->setMediator(kitchenMediator);

    restuarant->addTable(table1);
    restuarant->addTable(table2);
    restuarant->addTable(table3);

    restuarant->addWaiter(waiter1);
    restuarant->addWaiter(waiter2);
    restuarant->addWaiter(waiter3);

    Customer* customer1 = new Customer(1,"Kamo");
    Customer* customer2 = new Customer(2,"KB");
    Customer* customer3 = new Customer(3,"Victor");

    // restuarant->initialCustomerHandling(customer1);
    // restuarant->initialCustomerHandling(customer2);
    // restuarant->initialCustomerHandling(customer3);

    
    // customer3->placeOrder();

    // TableVisitor *cManager = new ComplaintsManager();
    // TableVisitor *aManager = new AdminManager();
    // restuarant->addManager(cManager);
    // restuarant->addManager(aManager);
    // int visitTimes = 0;
    // char i;
    // while(visitTimes < 3)
    // {
    //     cout << "Are you ready to order:(y/n) ";
    //     cin>> i;
    //     if(i == 'y' || i == 'Y')
    //     {
    //         customer1->placeOrder();
    //         customer2->placeOrder();
    //         restuarant->visitTable();
    //         table1->readyForBill(waiter1,accountingSystem);
    //         restuarant->payTab(customer1,careTaker);
    //         restuarant->payTab(customer2,careTaker);
    //         break;
    //     }
    //     if(visitTimes == 2)
    //     {
    //         cout << "Sorry you are taking up space"<<endl;
    //         customer1->leave();
    //         customer2->leave();
    //     }
    //     sleep(3);
    //     visitTimes++;

    // }
    
    
    // restuarant->payTab(customer3,careTaker);
    // accountingSystem->generateReport();
    
    delete restuarant;
    delete restaurantObserver;
    delete kitchenMediator;
    delete careTaker;
    delete customer1;
    delete customer2;
    delete customer3;
    return 0;
}
