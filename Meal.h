#ifndef MEAL_H
#define MEAL_H

#include <string>

using namespace std;

/**
 * @brief The Meal class is an abstract base class that defines the interface for creating meals.
 * 
 * This class contains pure virtual functions for creating meals and getting the name of the meal.
 * It also contains a protected member variables for the name of the meal, whether it has a garnish, and whether it has a sauce.
 * The class also defines an equality operator for comparing meals.
 */
class Meal {
    public:
        virtual ~Meal();
        virtual std::string getName() = 0;
        virtual void create() = 0;
        bool operator==(Meal& other);
    protected:
        string name;
        bool garnish;
        bool sauce;
        
};
#endif
