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

// // #include <iostream>

// // const std::string RED_COLOR = "\x1B[31m";
// // const std::string GREEN_COLOR = "\x1B[32m";
// // const std::string RESET_COLOR = "\x1B[0m"; // Reset color to default


// // using namespace std;

// // int main() {
// //     cout << GREEN_COLOR << "all files compiled successfully" << RESET_COLOR << endl;

//     Restaurant* restuarant = new Restaurant();
//     OrderMediator* kitchenMediator = new RestaurantOrderMediator();

//     Table* table1 = new Table(1);
//     Table* table2 = new Table(2);
//     Table* table3 = new Table(3);

//     Waiter* waiter1 = new Waiter("John");
//     Waiter* waiter 2 = new Waiter("Jack");
//     Waiter* waiter3 = new Waiter("Jill");

//     waiter1->addTable(table1);
//     waiter2->addTable(table2);
//     waiter3->addTable(table3);

//     waiter1->setMediator(kitchenMediator);
//     waiter2->setMediator(kitchenMediator);
//     waiter3->setMediator(kitchenMediator);

//     restuarant->addTable(table1);
//     restuarant->addTable(table2);
//     restuarant->addTable(table3);

//     restuarant->addWaiter(waiter1);
//     restuarant->addWaiter(waiter2);
//     restuarant->addWaiter(waiter3);

//     Customer* customer

//     return 0;
// }