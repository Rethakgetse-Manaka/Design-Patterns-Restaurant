#ifndef Chef_H
#define Chef_H
#include "Colleague.h"
class Plate;
class Chef:public Colleague
{
    private:
        std::vector<Order*> orders;
        std::vector<Plate*> plates;
        bool available;
        std::string name;
    public:
        virtual void sendOrder(Order* o);
        virtual void receiveOrder(Order* o);

};
#endif