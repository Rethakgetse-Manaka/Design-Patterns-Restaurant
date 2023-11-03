#include "ComplaintsManager.h"

using namespace std;

ComplaintsManager::ComplaintsManager()
{
}

void ComplaintsManager::visitCustomer(Customer *customer)
{
    int decision = -1;
    cout<<"Good day " << customer->getCustomerName() << " do you have any complaints?"<<endl;
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;
    cin >> decision;
    if (decision == 1)
    {
        customer->complain();
        customer->decreaseTip();
        cout<<"Okay, I am sorry to hear that we will take care of it right away."<<endl;
        customer->resolveComplaint();
    }
    else
    {
        cout<<"Have a nice day!"<<endl;
        customer->increaseTip();
    }
}

ComplaintsManager::~ComplaintsManager()
{
}