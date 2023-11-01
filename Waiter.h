#ifndef Waiter_H
#define Waiter_H
#include "Colleague.h"
class Plate;
class Waiter:public Colleague
{
    private:
        std::string name;
        std::vector<Table*> tables;
    public:
        virtual void receiveOrder(Order* o);
        void addTable(Table* t);
        void presentFoodToTable(Table* t,Plate* p);
        void presentBill(Table* t);
        std::string getName();



};
#endif