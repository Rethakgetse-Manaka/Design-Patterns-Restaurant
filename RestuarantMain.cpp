// #include "RestaurantOrderMediator.h"
// #include "Waiter.h"
// #include "GrillChef.h"
// #include "FryCook.h"
// #include "PastaChef.h"
// #include "RotisseurChef.h"
// #include "VegetableChef.h"
// #include "FoodItem.h"
// #include "Plate.h"
// #include "BeefKebab.h"
// #include "BeefBurger.h"
// #include "Wings.h"
// #include "FriedMeal.h"
// #include "Ramen.h"
// #include "Alfredo.h"
// #include "ChickenSalad.h"
// #include "ChickenBurger.h"
// #include "GreenSalad.h"
// #include "StirFry.h"
// #include "Customer.h"
// #include "TableState.h"
// #include "Table.h"
// #include "Waiter.h"
// #include "Valet.h"
// #include "ValletHandler.h"
// #include "ValetFactoryImpl.h"
// #include "Restaurant.h"
// #include "CocktailDecorator.h"
// #include "SpecificCocktail.h"
// #include "BaseCocktail.h"
// #include "Order.h"

// #include <iostream>

// const std::string RED_COLOR = "\x1B[31m";
// const std::string GREEN_COLOR = "\x1B[32m";
// const std::string RESET_COLOR = "\x1B[0m"; // Reset color to default


// using namespace std;

// int main() {
//     cout << GREEN_COLOR << "all files compiled successfully" << RESET_COLOR << endl;

//     Restaurant* restuarant = new Restaurant();
//     OrderMediator* kitchenMediator = new RestaurantOrderMediator();

//     Table* table1 = new Table(1);
//     Table* table2 = new Table(2);
//     Table* table3 = new Table(3);

//     Waiter* waiter1 = new Waiter("John");
//     Waiter* waiter2 = new Waiter("Jack");
//     Waiter* waiter3 = new Waiter("Jill");

//     waiter1->addTable(table1);
//     table1->setWaiter(waiter1);
//     waiter2->addTable(table2);
//     table2->setWaiter(waiter2);
//     waiter3->addTable(table3);
//     table3->setWaiter(waiter3);

//     waiter1->setMediator(kitchenMediator);
//     waiter2->setMediator(kitchenMediator);
//     waiter3->setMediator(kitchenMediator);

//     restuarant->addTable(table1);
//     restuarant->addTable(table2);
//     restuarant->addTable(table3);

//     restuarant->addWaiter(waiter1);
//     restuarant->addWaiter(waiter2);
//     restuarant->addWaiter(waiter3);

//     Customer* customer1 = new Customer(1,"Kamo");
//     Customer* customer2 = new Customer(2,"KB");
//     Customer* customer3 = new Customer(3,"Victor");

//     restuarant->initialCustomerHandling(customer1);
//     restuarant->initialCustomerHandling(customer2);
//     restuarant->initialCustomerHandling(customer3);

//     customer1->placeOrder();
//     customer2->placeOrder();
//     customer3->placeOrder();




    Restaurant* restuarant = new Restaurant();
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

    restuarant->initialCustomerHandling(customer1);
    restuarant->initialCustomerHandling(customer2);
    restuarant->initialCustomerHandling(customer3);

    customer1->placeOrder();
    customer2->placeOrder();
    customer3->placeOrder();

    table1->readyForBill(waiter1,accountingSystem);
    restuarant->payTab(customer1,careTaker);
    restuarant->payTab(customer2,careTaker);
    restuarant->payTab(customer3,careTaker);
    accountingSystem->generateReport();
    return 0;
}
