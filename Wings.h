
#ifndef WINGS_H
#define WINGS_H

#include <string>
#include "StarterMeal.h"

using namespace std;

class Wings : public StarterMeal {
    public:
        /**
         * @brief Creates a Wings object.
         * 
         */
        void create();

        /**
         * @brief Returns the name of the Wings object.
         * 
         * @return string 
         */
        virtual string getName();
};
#endif