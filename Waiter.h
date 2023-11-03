#ifndef Waiter_H
#define Waiter_H
#include <iomanip>
#include "Colleague.h"
#include "OrderMediator.h"
#include "Table.h"
// class Table;;;
class Colleague;
class Plate;
class Waiter:public Colleague {
    private:
        std::string name;
        std::vector<Table*> tables;
    public:
        Waiter(std::string name);
        virtual void receiveOrder(Order* o);
        void addTable(Table* t);
        void removeTable(Table* t);
        void presentFoodToTable(Plate* p);
        void presentBill(Table* t);
        bool managesTable(int tbn);
        Table* getTable(int tbn);
        std::string getName();
};
#endif