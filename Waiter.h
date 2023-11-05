#ifndef Waiter_H
#define Waiter_H
#include <iomanip>
#include "Colleague.h"
#include "OrderMediator.h"
#include "Table.h"
// class Table;
class Colleague;
class Plate;
/**
 * @brief The Waiter class represents a colleague in the restaurant that manages tables and takes orders from customers.
 */
class Waiter:public Colleague {
    private:
        std::string name; /**< The name of the waiter. */
        std::vector<Table*> tables; /**< The tables managed by the waiter. */
    public:
        /**
         * @brief Constructs a new Waiter object with the given name.
         * 
         * @param n The name of the waiter.
         */
        Waiter(std::string n);

        /**
         * @brief Receives an order from a customer and forwards it to the kitchen.
         * 
         * @param o The order received from the customer.
         */
        virtual void receiveOrder(Order* o);

        /**
         * @brief Adds a table to the list of tables managed by the waiter.
         * 
         * @param t The table to be added.
         */
        void addTable(Table* t);

        /**
         * @brief Removes a table from the list of tables managed by the waiter.
         * 
         * @param t The table to be removed.
         */
        void removeTable(Table* t);

        /**
         * @brief Presents a plate of food to a table.
         * 
         * @param p The plate of food to be presented.
         */
        void presentFoodToTable(Plate* p);

        /**
         * @brief Presents a tray of drinks to a table.
         * 
         * @param d The tray of drinks to be presented.
         */
        void presentDrinksToTable(DrinkTray* d);

        /**
         * @brief Presents the bill to a table.
         * 
         * @param t The table to which the bill is to be presented.
         */
        void presentBill(Table* t);

        /**
         * @brief Checks if the waiter manages a table with the given table number.
         * 
         * @param tbn The table number to be checked.
         * @return true if the waiter manages a table with the given table number, false otherwise.
         */
        bool managesTable(int tbn);

        /**
         * @brief Gets the table with the given table number.
         * 
         * @param tbn The table number of the table to be retrieved.
         * @return The table with the given table number.
         */
        Table* getTable(int tbn);

        /**
         * @brief Gets the name of the waiter.
         * 
         * @return The name of the waiter.
         */
        std::string getName();
};
#endif