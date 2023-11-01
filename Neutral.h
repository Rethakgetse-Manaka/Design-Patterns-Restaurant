#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "CustomerState.h"
#include "Happy.h"
#include "UnHappy.h"

class Neutral: public CustomerState
{
private:

public:
    Neutral();
    void handle(Customer* c);
    void showHapiness(Customer* c);
    void showUnhapiness(Customer* c);
    ~Neutral();
};

#endif