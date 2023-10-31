#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <vector>
#include "Meal.h"
// #include "Order.h"

using namespace std;

//plates work as follows: Orders have order IDs so all chefs will share the same vector of plates and when the food item has been made,
//the plates vector will be updated at the index of the order's orderID.

class Chef {
    private: 
        // vector<Order*> orders; // orders is a vector of Order pointers
        // static vector<Plate*> plates;
    public:
        // void addOrder(Order* order) = 0;
        virtual Meal* createStarter() = 0;
        virtual Meal* createMain() = 0;

        virtual ~Chef() {};
};
#endif