#include "Happy.h"
class UnHappy;
class Neutral;
using namespace std;

Happy::Happy()
{
    this->state = "Happy";
}

void Happy::handle(Customer *c)
{
    c->setState(new Neutral());
    stringstream s;
    s << c->getCustomerID();
    cout<< c->getCustomerName() << " (" << s.str() << ") has changed to the neutral state." << endl; 
}

void Happy::showHapiness(Customer *c)
{
}

void Happy::showUnhapiness(Customer *c)
{
    c->setState(new UnHappy());
    stringstream s;
    s << c->getCustomerID();
    cout<< c->getCustomerName() << " (" << s.str() << ") has changed to the unhappy state." << endl; 
}

Happy::~Happy()
{
}