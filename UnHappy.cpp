#include "UnHappy.h"
class Neutral;

using namespace std;

UnHappy::UnHappy()
{
    this->state = "UnHappy";
}

void UnHappy::handle(Customer *c)
{
    c->setState(new Neutral());
    stringstream s;
    s << c->getCustomerID();
    cout<< c->getCustomerName() << " (" << s.str() << ") has changed to the neutral state." << endl; 
}

void UnHappy::showHapiness(Customer *c)
{
    c->setState(new UnHappy());
    stringstream s;
    s << c->getCustomerID();
    cout<< c->getCustomerName() << " (" << s.str() << ") has changed to the unhappy state." << endl; 
}

void UnHappy::showUnhapiness(Customer *c)
{
}

UnHappy::~UnHappy()
{
}