#include "Customer.h"
using namespace std;

Customer::Customer()
{
    this->state = new Neutral();
    this->order = NULL;
}

Customer::Customer(int id, std::string name)
{
    this->customerID = id;
    this->customerName = name;
    this->state = new Neutral();
    this->order = NULL;
}

Customer::~Customer()
{
    if (this->order != NULL)
    {
        delete order;
        order = NULL;
    }

    if (this->state != NULL)
    {
        delete state;
        state = NULL;
    }
}

int Customer::getCustomerID()
{
    return this->customerID;
}

std::string Customer::getCustomerName()
{
    return this->customerName;
}

CustomerState *Customer::getState()
{
    return this->state;
}

OrderHandler *Customer::requestWaiter()
{
    return nullptr;
}

void Customer::setState(CustomerState *s)
{
    delete this->state;
    this->state = s;
}

void Customer::placeOrder()
{
}

Order *Customer::menu()
{
    Order *customerOrder = new Order(customerID, customerName);
    int starterVal = -1;
    while (starterVal != 1 && starterVal != 2 && starterVal != 3 && starterVal != 4 && starterVal != 5)
    {
        cout << "-------Welcome to Patterning the Patterns.--------" << endl;
        cout << "What would you like for a starter? (Pick an option below)" << endl;
        cout << "1. Beef Kebab - R50" << endl;
        cout << "2. Green Salad - R30" << endl;
        cout << "3. Ramen - R35" << endl;
        cout << "4. Wings - R65" << endl;
        cout << "5. Chicken Salad - R32" << endl;
        cin >> starterVal;
    }

    switch (starterVal)
    {
    case 1:
        customerOrder->addStarter("Beef Kebab", 50.0);
        break;
    case 2:
        customerOrder->addStarter("Green Salad", 30.0);
        break;
    case 3:
        customerOrder->addStarter("Ramen", 35.0);
        break;
    case 4:
        customerOrder->addStarter("Wings", 65.0);
        break;
    case 5:
        customerOrder->addStarter("Chicken Salad", 32.0);
        break;
    default:
        break;
    }

    int mainVal = -1;
    while (mainVal != 1 && mainVal != 2 && mainVal != 3 && mainVal != 4 && mainVal != 5)
    {
        cout << "What would you like for a main? (Pick an option below)" << endl;
        cout << "1. Beef Burger - R89" << endl;
        cout << "2. Stirfry - R72" << endl;
        cout << "3. Alfredo - R90" << endl;
        cout << "4. Chicken Burger - R65" << endl;
        cout << "5. Fried Meal - R85" << endl;
        cin >> mainVal;
    }

    switch (mainVal)
    {
    case 1:
        cout<<"Would you like your patty well-done or medium-rare" << endl;
        cout<<"1. Well-done" << endl;
        cout<<"2. Medium-rare" << endl;
        cout<<"Would you like to remove garnish?" << endl;
        cout<<"1. Yes" << endl;
        cout<<"2. No" << endl;
        cout<<"Would you like to remove the sauce?" << endl;
        cout<<"1. Yes" << endl;
        cout<<"2. No" << endl;
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    
    default:
        break;
    }
}

void Customer::increaseTip()
{
    this->tip += 10;
}

void Customer::decreaseTip()
{
    if (this->tip - 10 > 0)
    {
        this->tip -= 10;
    }
    else
    {
        this->tip = 0;
    }
}
