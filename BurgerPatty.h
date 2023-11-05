#ifndef BURGERPATTY_H
#define BURGERPATTY_H

#include "BeefBurger.h"

/**
 * @brief The BurgerPatty class is a concrete component of the Decorator design pattern.
 * 
 * It inherits from the BeefBurger class and adds functionality to it.
 */
class BurgerPatty : public BeefBurger{
    public:
        /**
         * @brief Construct a new BurgerPatty object
         * 
         */
        BurgerPatty();

        /**
         * @brief Adds a BeefBurger object to the BurgerPatty object.
         * 
         * @param base The BeefBurger object to be added.
         */
        virtual void add(BeefBurger* base);
};

#endif