#ifndef Waiter_H
#define Waiter_H
#include <iomanip>
#include <unistd.h>
#include "Colleague.h"
#include "OrderMediator.h"
#include "Table.h"
// class Table;
class Colleague;
class Plate;
/**
 * @brief The Waiter class represents a colleague who takes orders from tables, presents food and drinks to tables, and presents bills to tables.
 * 
 */
class Waiter:public Colleague {
    private:
        std::string name; /**< The name of the waiter. */
        std::vector<Table*> tables; /**< The tables that the waiter is responsible for. */
    public:
        /**
         * @brief Construct a new Waiter object with the given name.
         * 
         * @param n The name of the waiter.
         */
        Waiter(std::string n);

        /**
         * @brief Destroy the Waiter object.
         * 
         */
        virtual ~Waiter();

        /**
         * @brief Receive an order from a table.
         * 
         * @param o The order to receive.
         */
        virtual void receiveOrder(Order* o);

        /**
         * @brief Add a table to the waiter's list of tables.
         * 
         * @param t The table to add.
         */
        void addTable(Table* t);

        /**
         * @brief Remove a table from the waiter's list of tables.
         * 
         * @param t The table to remove.
         */
        void removeTable(Table* t);

        /**
         * @brief Present a plate of food to a table.
         * 
         * @param p The plate of food to present.
         */
        void presentFoodToTable(Plate* p);

        /**
         * @brief Present a drink tray to a table.
         * 
         * @param d The drink tray to present.
         */
        void presentDrinksToTable(DrinkTray* d);

        /**
         * @brief Present the bill to a table.
         * 
         * @param t The table to present the bill to.
         */
        void presentBill(Table* t);

        /**
         * @brief Check if the waiter manages a table with the given table number.
         * 
         * @param tbn The table number to check.
         * @return true if the waiter manages a table with the given table number, false otherwise.
         */
        bool managesTable(int tbn);

        /**
         * @brief Get the table with the given table number.
         * 
         * @param tbn The table number to get.
         * @return The table with the given table number, or nullptr if no such table exists.
         */
        Table* getTable(int tbn);

        /**
         * @brief Get the name of the waiter.
         * 
         * @return The name of the waiter.
         */
        std::string getName();
};
#endif