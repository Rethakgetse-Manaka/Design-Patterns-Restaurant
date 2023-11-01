#ifndef HAPPY_H
#define HAPPY_H

#include "CustomerState.h"
#include "Neutral.h"
#include "UnHappy.h"
class Happy: public CustomerState
{
private:

public:
    Happy();
    void handle(Customer* c);
    void showHapiness(Customer* c);
    void showUnhapiness(Customer* c);   
    ~Happy();
};

#endif