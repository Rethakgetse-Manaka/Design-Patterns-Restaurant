#include "AdminManager.h"

using namespace std;

AdminManager::AdminManager()
{
}

void AdminManager::visitCustomer(Customer *customer)
{
    cout << "Admin Managers checks with " << customer->getCustomerName() << " to see if the service is up to standard." << endl;
    int min = 1; 
    int max = 10;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(min, max);

    int randomNumber = dist(mt);
    if(randomNumber >= 5){
        customer->respondWithSatifaction();
        customer->increaseTip();
    }else{
        customer->respondWithDissatifaction();
        cout<<"Okay, I am will make the necessary adjustments immediately."<<endl;
        customer->resolveService();
        customer->increaseTip();
    }
}
AdminManager::~AdminManager()
{
}