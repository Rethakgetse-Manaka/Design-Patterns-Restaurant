#include "Customer.h"
using namespace std;

Customer::Customer()
{
    this->state = new Neutral();
    this->order = NULL;
    this->tip = 0.0;
}

Customer::Customer(int id, std::string name)
{
    this->customerID = id;
    this->customerName = name;
    this->state = new Neutral();
    this->order = NULL;
    this->tip = 0.0;
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

void Customer::setTable(Table *t)
{
    this->table = t;
}

Table *Customer::getTable()
{
    return table;
}

int Customer::getCustomerID()
{
    return this->customerID;
}

std::string Customer::getCustomerName()
{
    return this->customerName;
}

int Customer::getTableID()
{
    return this->tableID;
}

CustomerState *Customer::getState()
{
    return this->state;
}

Order *Customer::getOrder()
{
    return this->order;
}

int Customer::getTabID()
{
    return this->tabID;
}

double Customer::getTip()
{
    return this->tip;
}

void Customer::setTableID(int id)
{
    this->tableID = id;
}

void Customer::setValletID(int id)
{
    this->valletID = id;
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

void Customer::payBill(Bill *bill)
{
    cout << this->customerName << " is paying their bill which totals to: R" << bill->getBillTotal() << endl;
}

void Customer::placeOrder()
{
    this->order = menu();
    std::cout << this->order->printOrder();
    
    OrderMediator* r = table->getWaiter()->getMediator();
    r->addWaiter(table->getWaiter());
    table->getWaiter()->receiveOrder(this->order);
}

Order *Customer::menu()
{
    cout << "-------Welcome to Patterning the Patterns.--------" << endl;
    Order *customerOrder = new Order(customerID, customerName);
    int starterVal = -1, multStarter = 0;
    cout << "Would you like to order a starter?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> multStarter;
    while (multStarter != 2)
    {
        while (starterVal != 1 && starterVal != 2 && starterVal != 3 && starterVal != 4 && starterVal != 5)
        {
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
        starterVal = -1;
        cout << customerOrder->printOrder() << endl;
        cout << "Would you like to order more starters?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multStarter;
    }
    cout << customerOrder->printOrder() << endl;

    int mainVal = -1, multMain = 0;
    cout << "Would you like to order a main?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> multMain;
    while (multMain != 2)
    {
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

        int welldone = 0, garnish = 0, sauce = 0;
        switch (mainVal)
        {
        case 1:

            cout << "Would you like your patty well-done or medium-rare" << endl;
            cout << "1. Well-done" << endl;
            cout << "2. Medium-rare" << endl;
            cin >> welldone;
            cout << "Would you like to remove garnish?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> garnish;
            cout << "Would you like to remove the sauce?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> sauce;
            customerOrder->addItem("Beef Burger", garnish == 1, sauce == 1, 89.0, welldone == 1);
            break;
        case 2:
            customerOrder->addItem("Stir Fry", false, false, 72.0, false);
            break;
        case 3:
            customerOrder->addItem("Alfredo", false, false, 90.0, false);
            break;
        case 4:
            cout << "Would you like your patty well-done or medium-rare" << endl;
            cout << "1. Well-done" << endl;
            cout << "2. Medium-rare" << endl;
            cin >> welldone;
            cout << "Would you like to remove garnish?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> garnish;
            cout << "Would you like to remove the sauce?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> sauce;
            customerOrder->addItem("Chicken Burger", garnish == 1, sauce == 1, 65.0, welldone == 1);
            break;
        case 5:
            customerOrder->addItem("Fried Meal", false, false, 85.0, false);
            break;
        default:
            break;
        }

        
        mainVal = -1;
        cout << customerOrder->printOrder() << endl;
        cout << "Would you like to order another main?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multMain;
        
    }
    cout << customerOrder->printOrder() << endl;

    int drinkVal = -1, multDrink = 0;
    cout << "Would you like to order a drink?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> multDrink;
    while (multDrink != 2)
    {
        while (drinkVal != 1 && drinkVal != 2 && drinkVal != 3 && drinkVal != 4 && drinkVal != 5)
        {
            cout << "What would you like as a base for your  drink? (Pick an option below)" << endl;
            cout << "1. Sprite - R15" << endl;
            cout << "2. Coca-Cola - R17" << endl;
            cout << "3. Fanta Orange - R20" << endl;
            cout << "4. Juice - R25" << endl;
            cout << "5. Red bull - R15" << endl;
            cin >> drinkVal;
        }
        int alVal = -1;
        cout << " Would you like to add alcohol to your drink? (Pick an option below)" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> alVal;
        std::string mixes = "";
        double alcoholCost = 0.0;
        if (alVal == 1)
        {
            int alcoholVal = 0;
            cout << "What would you like to add to your drink? (Pick an option below)" << endl;
            cout << "1. Vodka - R15" << endl;
            cout << "2. Whiskey - R17" << endl;
            cout << "3. Rum - R20" << endl;
            cout << "4. Tequila - R25" << endl;
            cout << "5. Gin - R15" << endl;
            cout << "-1. Done" << endl;
            cin >> alcoholVal;
            while (alcoholVal != -1)
            {
                switch (alcoholVal)
                {
                case 1:
                    mixes += " Vodka";
                    alcoholCost += 15.0;
                    break;
                case 2:
                    mixes += " Whiskey";
                    alcoholCost += 17.0;
                    break;
                case 3:
                    mixes += " Rum";
                    alcoholCost += 20.0;
                    break;
                case 4:
                    mixes += " Tequila";
                    alcoholCost += 25.0;
                    break;
                case 5:
                    mixes += " Gin";
                    alcoholCost += 15.0;
                    break;
                default:
                    break;
                }

                cout << "What would you like to add to your drink? (Pick an option below)" << endl;
                cout << "1. Vodka - R15" << endl;
                cout << "2. Whiskey - R17" << endl;
                cout << "3. Rum - R20" << endl;
                cout << "4. Tequila - R25" << endl;
                cout << "5. Gin - R15" << endl;
                cout << "-1. Done" << endl;
                cin >> alcoholVal;
            }
        }

        switch (drinkVal)
        {
        case 1:
            customerOrder->addDrink("Sprite", alVal == 1, 15.0 + alcoholCost, mixes);
            break;
        case 2:
            customerOrder->addDrink("Coca-Cola", alVal == 1, 17.0 + alcoholCost, mixes);
            break;
        case 3:
            customerOrder->addDrink("Fanta Orange", alVal == 1, 20.0 + alcoholCost, mixes);
            break;
        case 4:
            customerOrder->addDrink("Juice", alVal == 1, 25.0 + alcoholCost, mixes);
            break;
        case 5:
            customerOrder->addDrink("Red bull", alVal == 1, 15.0 + alcoholCost, mixes);
            break;

        default:
            break;
        }

        cout << customerOrder->printOrder() << endl;
        drinkVal = -1;
        cout << "Would you like to order another drink?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multDrink;
    }
    cout << customerOrder->printOrder() << endl;
    cout << "Your order has been placed." << endl;
    return customerOrder;
}

void Customer::complain()
{
    state->showUnhapiness(this);
    cout << this->customerName << " is complaining about their food."<< endl;
}

void Customer::resolveComplaint()
{
    state->handle(this);
    cout << this->customerName << " is now fine with their food and will try taste it" << endl;
    eat();
}

void Customer::resolveService()
{
    state->handle(this);
    cout << this->customerName << " is now fine with their service" << endl;
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

void Customer::respondWithSatifaction()
{
    state->showHapiness(this);
    cout << this->customerName << " is now happy with their service." << endl;
}

void Customer::respondWithDissatifaction()
{
    state->showUnhapiness(this);
    cout << this->customerName << " is now unhappy with their service." << endl;
}

void Customer::eat()
{
    state->showHapiness(this);
    for(int i = 0; i < (int)order->getFoodItems().size(); i++){
        cout << this->customerName << " is eating their " << order->getFoodItems()[i]->getMealName() << endl;
    }
}

void Customer::accept(TableVisitor *v)
{
    v->visitCustomer(this);
}
