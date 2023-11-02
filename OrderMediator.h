#ifndef OrderMediator_H
#define OrderMediator_H
#include "Table.h"
class Plate;
class OrderMediator
{
    public:
        virtual void notifyOrderPlaced(Order* o) = 0;
        virtual void notifyPlateReady(Plate* p) = 0;

};
#endif