#include "Plate.h"
#include <iostream>
#include "Meal.h"

Plate::Plate() {
    
}


void Plate::addMeal(Meal* item) {
    m_Meals.push_back(item);
}


void Plate::removeMeal(Meal* item) {
    for (int i = 0; i < m_Meals.size(); i++) {
        if (m_Meals[i] == item) {
            m_Meals.erase(m_Meals.begin() + i);
        }
    }
}


std::vector<Meal*>& Plate::getMeals() {
    return m_Meals;
}
void Plate::showMeals(){
    for (int i = 0; i < m_Meals.size(); i++) {
        std::cout << m_Meals[i]->getName() << " "; 
    }
    std::cout << std::endl;
}

Plate::~Plate() {
    if(!m_Meals.empty()){
        for (int i = 0; i < m_Meals.size(); i++) {
            delete m_Meals[i];
        }
    }
}