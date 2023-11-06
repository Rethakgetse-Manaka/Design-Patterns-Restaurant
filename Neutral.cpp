#include "Neutral.h"
class Happy;
class UnHappy;

using namespace std;

Neutral::Neutral()
{
    this->state = "Neutral";
}

void Neutral::handle(Customer *c)
{
    
}

void Neutral::showHapiness(Customer *c)
{
    c->setState(new Happy());
    stringstream s;
    s << c->getCustomerID();
    cout<< c->getCustomerName() << " (" << s.str() << ") has changed to the happy state." << endl; 
}

void Neutral::showUnhapiness(Customer *c)
{
    c->setState(new UnHappy());
    stringstream s;
    s << c->getCustomerID();
    cout<< c->getCustomerName() << " (" << s.str() << ") has changed to the unhappy state." << endl; 
}

Neutral::~Neutral()
{
}