#ifndef Table_H
#define Table_H
#include "Order.h"
#include "AccountingSystem.h"
#include <iostream>
#include <algorithm>
#include "TabCaretaker.h"
#include "Tab.h"
class Customer;
class Bill;
class TableState;
class Waiter;

/**
 * @brief The Table class represents a table in a restaurant.
 * 
 * It contains information about the customers seated at the table, the table number, the current state of the table, 
 * the waiter serving the table, and the bill for the table. It also provides methods to add and remove customers, 
 * place orders, set and get the bill, and change the state of the table. 
 * 
 * The Table class implements the State design pattern to manage the state of the table.
 */
class Table
/**
 * The Table class represents a table in a restaurant. It contains information about the customers seated at the table, the table number, the current state of the table, the waiter serving the table, and the bill associated with the table.
 */
 {
    private:
        Bill* bill; // The bill associated with the table
        std::vector<Customer*> customers; // The customers seated at the table
        int tableNumber; // The table number
        int count; // The number of customers seated at the table
        TableState* state; // The current state of the table
        Waiter* waiter; // The waiter serving the table
        TabCaretaker* tabCaretaker; // The caretaker for the table's state

    public:
        /**
         * Adds a customer to the table.
         * @param c The customer to add.
         */
        void addCustomer(Customer* c);

        /**
         * Returns a vector of the customers seated at the table.
         * @return A vector of the customers seated at the table.
         */
        std::vector<Customer*> getCustomers();

        /**
         * Removes a customer from the table.
         * @param c The customer to remove.
         */
        void removeCustomer(Customer* c);

        /**
         * Notifies the waiter that the table is ready for the bill.
         * @param w The waiter serving the table.
         * @param as The accounting system used to generate the bill.
         */
        void readyForBill(Waiter* w, AccountingSystem* as);

        /**
         * Places an order for the table.
         * @param o The order to place.
         * @param w The waiter serving the table.
         */
        void placeOrder(Order* o,Waiter* w);

        /**
         * Sets the bill associated with the table.
         * @param b The bill to set.
         */
        void setBill(Bill * b);

        /**
         * Returns the bill associated with the table.
         * @return The bill associated with the table.
         */
        Bill* getBill();

        /**
         * Sets the waiter serving the table.
         * @param waiter The waiter serving the table.
         */
        void setWaiter(Waiter* waiter);

        //added for state Pattern

        /**
         * Constructs a new Table object with the given table number.
         * @param tableNumber The table number.
         */
        Table(int tableNumber);

        /**
         * Sets the caretaker for the table's state.
         * @param t The caretaker to set.
         */
        void setCaretaker(TabCaretaker* t);

        /**
         * Destroys the Table object.
         */
        ~Table();

        /**
         * Occupies the table.
         */
        void occupyTable();

        /**
         * Frees the table.
         */
        void freeTable();

        /**
         * Combines the table with another table.
         */
        void combineTable();

        /**
         * Splits the table into two tables.
         */
        void splitTable();

        /**
         * Returns the table number.
         * @return The table number.
         */
        int getTableNumber() const;

        /**
         * Prints the status of the table.
         */
        void printTableStatus() const;

        /**
         * Sets the state of the table.
         * @param newState The new state to set.
         */
        void setState(TableState* newState);

        /**
         * Returns the current state of the table.
         * @return The current state of the table.
         */
        TableState* getState() const;

        /**
         * Returns the customer with the given ID.
         * @param custID The ID of the customer to return.
         * @return The customer with the given ID.
         */
        Customer* getCustomer(int custID);

        /**
         * Returns the waiter serving the table.
         * @return The waiter serving the table.
         */
        Waiter* getWaiter();

        /**
         * Returns true if the table is free, false otherwise.
         * @return True if the table is free, false otherwise.
         */
        bool isFree();
};
#endif