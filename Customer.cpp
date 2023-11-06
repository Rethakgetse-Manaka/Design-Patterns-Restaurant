#include "Customer.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Customer::Customer()
{
    this->state = new Neutral();
    this->order = NULL;
    this->tip = 0.0;
    this->tab = NULL;
    this->valletID = -1;
}

Customer::Customer(int id, std::string name)
{
    this->customerID = id;
    this->customerName = name;
    this->state = new Neutral();
    this->order = NULL;
    this->tip = 0.0;
    this->tab = NULL;
    this->valletID = -1;
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

    if(this->tab != NULL)
    {
        delete tab;
        tab = NULL;
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

void Customer::payBill(Bill *bill, AccountingSystem *accountingSystem)
{
    const std::string RED_COLOR = "\x1B[31m";
    const std::string GREEN_COLOR = "\x1B[32m";
    const std::string RESET_COLOR = "\x1B[0m";
    
    cout << this->customerName << " is paying their bill which totals to: R" << bill->getBillTotal() << endl;
    sleep(1);
    cout << "authorising payment";
    sleep(1); 
    cout << "."; 
    sleep(1); 
    cout << "."; 
    sleep(1); 
    cout << "."; 
    sleep(1); 
    cout << endl;
    cout << GREEN_COLOR << "Transaction approved. Thank you!" << RESET_COLOR << endl;
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);
    std::stringstream ss;
    ss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");

    if(bill->getOrder() == NULL){
        cout<< "null"<<endl;
    }    
    for (int i = 0; i < (int) bill->getOrder()->getFoodItems().size(); i++)
    {
        FoodItem *foodItem = new FoodItem(bill->getOrder()->getFoodItems()[i]->getMealName(), bill->getOrder()->getFoodItems()[i]->getPrice());
        Transaction *transaction = new Transaction(new Item(foodItem,1,0),bill->getOrder()->getFoodItems()[i]->getPrice(), TransactionType::SALE,ss.str());
        accountingSystem->recordSale(transaction);
    }
    
    
}

void Customer::placeOrder()
{
    this->order = menu();
    const string randomColour = "\033[32m";
    const string resetColor = "\033[0m";
    cout  << randomColour << this->order->printOrder() << resetColor << endl;

    OrderMediator* r = table->getWaiter()->getMediator();
    r->addWaiter(table->getWaiter());
    table->getWaiter()->receiveOrder(this->order);
}

Order *Customer::menu()
{
    cout << "-------Welcome to Patterning the Patterns.--------" << endl;
    Order *customerOrder = new Order(customerID, customerName);
    customerOrder->setTableID(getTableID());
    char starterVal = '0', multStarter = '0';
    cout << "Would you like to order a starter?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> multStarter;

    const string colors[] = {
        "\033[33m",  // Yellow
        "\033[34m",  // Blue
        "\033[35m",  // Magenta
        "\033[36m",  // Cyan
    };

    const string resetColor = "\033[0m";
     // Initialize the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Select a random color from the array
    int randomColorIndex = rand() % 4;
    string randomColour = colors[randomColorIndex];
    while (multStarter != '1' && multStarter != '2')
    {
        cout << "(Please try again) Would you like to order a starter?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multStarter;

    }
    while (multStarter != '2')
    {
        while (starterVal != '1' && starterVal != '2' && starterVal != '3' && starterVal != '4' && starterVal != '5')
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
        case '1':
            customerOrder->addStarter("Beef Kebab", 50.0);
            break;
        case '2':
            customerOrder->addStarter("Green Salad", 30.0);
            break;
        case '3':
            customerOrder->addStarter("Ramen", 35.0);
            break;
        case '4':
            customerOrder->addStarter("Wings", 65.0);
            break;
        case '5':
            customerOrder->addStarter("Chicken Salad", 32.0);
            break;
        default:
            break;
        }
        starterVal = '0';
        cout  << randomColour << customerOrder->printOrder() << resetColor << endl;
        cout << "Would you like to order more starters?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multStarter;
        while (multStarter != '1' && multStarter != '2')
        {
            cout << "(Please try again) Would you like to order more starters?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> multStarter;
        }
        
    }
    cout  << randomColour << customerOrder->printOrder() << resetColor << endl;

    char mainVal = '0', multMain = '0';
    cout << "Would you like to order a main?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> multMain;
    while (multMain != '1' && multMain != '2')
    {
        cout << "(Please try again) Would you like to order a main?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multMain;
    }

    while (multMain != '2')
    {
        while (mainVal != '1' && mainVal != '2' && mainVal != '3' && mainVal != '4' && mainVal != '5')
        {
            cout << "What would you like for a main? (Pick an option below)" << endl;
            cout << "1. Beef Burger - R89" << endl;
            cout << "2. Stirfry - R72" << endl;
            cout << "3. Alfredo - R90" << endl;
            cout << "4. Chicken Burger - R65" << endl;
            cout << "5. Fried Meal - R85" << endl;
            cin >> mainVal;
        }

        char welldone = '0', garnish = '0', sauce = '0';
        switch (mainVal)
        {
        case '1':

            cout << "Would you like your patty well-done or medium-rare" << endl;
            cout << "1. Well-done" << endl;
            cout << "2. Medium-rare" << endl;
            cin >> welldone;
            while (welldone != '1' && welldone != '2')
            {
                cout << "(Please try again) Would you like your patty well-done or medium-rare" << endl;
                cout << "1. Well-done" << endl;
                cout << "2. Medium-rare" << endl;
                cin >> welldone;
            }
            
            cout << "Would you like to remove garnish?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> garnish;
            while (garnish != '1' && garnish != '2')
            {
                cout << "(Please try again) Would you like to remove garnish?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> garnish;
            }
            cout << "Would you like to remove the sauce?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> sauce;
            while (sauce != '1' && sauce != '2')
            {
                cout << "(Please try again) Would you like to remove the sauce?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> sauce;
            }
            customerOrder->addItem("Beef Burger", garnish == 1, sauce == 1, 89.0, welldone == 1);
            break;
        case '2':
            customerOrder->addItem("Stir Fry", false, false, 72.0, false);
            break;
        case '3':
            customerOrder->addItem("Alfredo", false, false, 90.0, false);
            break;
        case '4':
            cout << "Would you like to remove garnish?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> garnish;
            while (garnish != '1' && garnish != '2')
            {
                cout << "(Please try again) Would you like to remove garnish?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> garnish;
            }
            cout << "Would you like to remove the sauce?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> sauce;
            while (sauce != '1' && sauce != '2')
            {
                cout << "(Please try again) Would you like to remove the sauce?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cin >> sauce;
            }
            customerOrder->addItem("Chicken Burger", garnish == 1, sauce == 1, 65.0, welldone == 1);
            break;
        case '5':
            customerOrder->addItem("Fried Meal", false, false, 85.0, false);
            break;
        default:
            break;
        }

        mainVal = '0';
        cout  << randomColour << customerOrder->printOrder() << resetColor << endl;
        cout << "Would you like to order another main?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multMain;
        while (multMain != '1' && multMain != '2')
        {
            cout << "(Please try again) Would you like to order another main?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> multMain;
        }
    }

    cout  << randomColour << customerOrder->printOrder() << resetColor << endl;

    char drinkVal = '0', multDrink = '0';
    cout << "Would you like to order a drink?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cin >> multDrink;
    while (multDrink != '1' && multDrink != '2')
    {
        cout << "(Please try again) Would you like to order a drink?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multDrink;
    }
    while (multDrink != '2')
    {
        while (drinkVal != '1' && drinkVal != '2' && drinkVal != '3' && drinkVal != '4' && drinkVal != '5')
        {
            cout << "What would you like as a base for your  drink? (Pick an option below)" << endl;
            cout << "1. Sprite - R15" << endl;
            cout << "2. Coca-Cola - R17" << endl;
            cout << "3. Fanta Orange - R20" << endl;
            cout << "4. Juice - R25" << endl;
            cout << "5. Red bull - R15" << endl;
            cin >> drinkVal;
        }
        char alVal = '0';
        cout << " Would you like to add alcohol to your drink? (Pick an option below)" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> alVal;
        while (alVal != '1' && alVal != '2')
        {
            cout << "(Please try again) Would you like to add alcohol to your drink? (Pick an option below)" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> alVal;
        }
        
        std::string mixes = "";
        double alcoholCost = 0.0;
        if (alVal == '1')
        {
            char alcoholVal = 0;
            cout << "What would you like to add to your drink? (Pick an option below)" << endl;
            cout << "1. Vodka - R15" << endl;
            cout << "2. Whiskey - R17" << endl;
            cout << "3. Rum - R20" << endl;
            cout << "4. Tequila - R25" << endl;
            cout << "5. Gin - R15" << endl;
            cout << "0. Done" << endl;
            cin >> alcoholVal;
            while (alcoholVal != '1' && alcoholVal != '2' && alcoholVal != '3' && alcoholVal != '4' && alcoholVal != '5' && alcoholVal != '0')
            {
                cout << "(Please try again) What would you like to add to your drink? (Pick an option below)" << endl;
                cout << "1. Vodka - R15" << endl;
                cout << "2. Whiskey - R17" << endl;
                cout << "3. Rum - R20" << endl;
                cout << "4. Tequila - R25" << endl;
                cout << "5. Gin - R15" << endl;
                cout << "0. Done" << endl;
                cin >> alcoholVal;
            }
            
            while (alcoholVal != '0')
            {
                switch (alcoholVal)
                {
                case '1':
                    mixes += " Vodka";
                    alcoholCost += 15.0;
                    break;
                case '2':
                    mixes += " Whiskey";
                    alcoholCost += 17.0;
                    break;
                case '3':
                    mixes += " Rum";
                    alcoholCost += 20.0;
                    break;
                case '4':
                    mixes += " Tequila";
                    alcoholCost += 25.0;
                    break;
                case '5':
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
                cout << "0. Done" << endl;
                cin >> alcoholVal;
                while (alcoholVal != '1' && alcoholVal != '2' && alcoholVal != '3' && alcoholVal != '4' && alcoholVal != '5' && alcoholVal != '0')
                {
                    cout << "(Please try again) What would you like to add to your drink? (Pick an option below)" << endl;
                    cout << "1. Vodka - R15" << endl;
                    cout << "2. Whiskey - R17" << endl;
                    cout << "3. Rum - R20" << endl;
                    cout << "4. Tequila - R25" << endl;
                    cout << "5. Gin - R15" << endl;
                    cout << "0. Done" << endl;
                    cin >> alcoholVal;
                }
            }
        }

        switch (drinkVal)
        {
        case '1':
            customerOrder->addDrink("Sprite", alVal == '1', 15.0 + alcoholCost, mixes);
            break;
        case '2':
            customerOrder->addDrink("Coca-Cola", alVal == '1', 17.0 + alcoholCost, mixes);
            break;
        case '3':
            customerOrder->addDrink("Fanta Orange", alVal == '1', 20.0 + alcoholCost, mixes);
            break;
        case '4':
            customerOrder->addDrink("Juice", alVal == '1', 25.0 + alcoholCost, mixes);
            break;
        case '5':
            customerOrder->addDrink("Red bull", alVal == '1', 15.0 + alcoholCost, mixes);
            break;

        default:
            break;
        }

        cout << customerOrder->printOrder() << endl;
        drinkVal = '0';
        cout << "Would you like to order another drink?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> multDrink;
        while (multDrink != '1' && multDrink != '2')
        {
            cout << "(Please try again) Would you like to order another drink?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> multDrink;
        }
    }

    cout  << randomColour << customerOrder->printOrder() << resetColor << endl;
    cout << resetColor << "Your order has been placed." << endl;
    return customerOrder;
}

void Customer::complain()
{
    state->showUnhapiness(this);
    cout << this->customerName << " is complaining about their food." << endl;
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
void Customer::setTab(Tab* t)
{
    tab= t;
}
Tab* Customer::getTab()
{
    return tab;
}
void Customer::eat()
{
    state->showHapiness(this);
    if (order != NULL)
    {
        for (int i = 0; i < (int)order->getFoodItems().size(); i++)
        {
            cout << this->customerName << " is eating their " << order->getFoodItems()[i]->getMealName() << endl;
        }
    }else{
        cout << this->customerName << " is eating their food." << endl;
    }
}

void Customer::drink()
{
    state->showHapiness(this);
    if (order != NULL)
    {
        for (int i = 0; i < (int)order->getDrinks().size(); i++)
        {
            cout << this->customerName << " is drinking their " << order->getDrinks()[i]->getDescription() << endl;
            sleep(2);
        }
    }else{
        cout << this->customerName << " is drinking their drink." << endl;
    }
}

void Customer::leave()
{
    cout<<"Thank you for visiting Patterning the Patterns Cuisine."<<endl;
    cout << this->customerName << " is leaving the restaurant." << endl;
    if(valletID != -1){
        cout << this->customerName << ", the vallet is returning your car." << endl;
    }
}

void Customer::accept(TableVisitor *v)
{
    v->visitCustomer(this);
}