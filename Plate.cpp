#include "Plate.h"
#include <iostream>
#include "Meal.h"

Plate::Plate() {
    
}


void Plate::addMeal(Meal* item) {
    m_Meals.push_back(item);
}

void Plate::setTableNumber(int tableNum)
{
    tableNumber = tableNum;
}

void Plate::setCustomerID(int ID)
{
    customerID = ID;
}

void Plate::removeMeal(Meal* item) {
    for (size_t i = 0; i < m_Meals.size(); i++) {
        if (m_Meals[i] == item) {
            m_Meals.erase(m_Meals.begin() + i);
        }
    }
}


std::vector<Meal*>& Plate::getMeals() {
    return m_Meals;
}
void Plate::showMeals(){
    for (size_t i = 0; i < m_Meals.size(); i++) {
        std::cout << m_Meals[i]->getName() << " "; 
    }
    std::cout << std::endl;
}

int Plate::getTableNumber()
{
    return tableNumber;
}

int Plate::getCustomerID()
{
    return customerID;
}

Plate::~Plate() {
    if(!m_Meals.empty()){
        for (int i = 0; i < (int)m_Meals.size(); i++) {
            delete m_Meals[i];
        }
    }
    m_Meals.clear();
}