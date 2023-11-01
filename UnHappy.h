#ifndef UNHAPPY_H
#define UNHAPPY_H

#include "CustomerState.h"
#include "Neutral.h"
class UnHappy: public CustomerState
{
private:

public:
    UnHappy();
    void handle(Customer* c);
    void showHapiness(Customer* c);
    void showUnhapiness(Customer* c);
    ~UnHappy();
};

#endif