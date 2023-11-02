#ifndef Chef_H
#define Chef_H
#include "Colleague.h"
class Plate;
class Chef:public Colleague
{
    private:
        
        static Plate* plate;
        std::string name;
    public:
        
        virtual void receiveOrder(std::string meal,int tableNumber,int custID,int numOfItems);
        static void setPlate(Plate* p);
        

};

#endif