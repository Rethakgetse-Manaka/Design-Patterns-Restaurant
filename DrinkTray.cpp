#include "DrinkTray.h"

DrinkTray::DrinkTray()
{
}

void DrinkTray::addDrink(Cocktail* item)
{
    m_Drinks.push_back(item);
}

void DrinkTray::setTableNumber(int tableNum)
{
    tableNumber = tableNum;
}

void DrinkTray::setCustomerID(int id)
{
    customerID = id;
}

// void DrinkTray::removeDrink(Meal *item)
// {
//     for (size_t i = 0; i < m_Drinks.size(); i++)
//     {
//         if (m_Drinks[i] == item)
//         {
//             m_Drinks.erase(m_Drinks.begin() + i);
//         }
//     }
// }

std::vector<Cocktail*> &DrinkTray::getDrinks()
{
    return m_Drinks;
}

int DrinkTray::getTableNumber()
{
    return tableNumber;
}

int DrinkTray::getCustomerID()
{
    return customerID;
}

DrinkTray::~DrinkTray()
{
    // if (!m_Drinks.empty())
    // {
    //     for (int i = 0; i < m_Drinks.size(); i++)
    //     {
    //         delete m_Drinks[i];
    //     }
    //     m_Drinks.clear();
    // }
}


