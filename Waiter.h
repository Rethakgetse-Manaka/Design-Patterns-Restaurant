#ifndef Waiter_H
#define Waiter_H
#include "Colleague.h"
class Waiter:public Colleague
{
    private:
        std::string name;
        std::vector<Table*> tables;
    public:
        virtual void receiveOrder(Order* o);
        virtual void sendOrder(Order* o);
        void presentFoodToTable(Table* t);
        void presentBill(Table* t);



};
#endif