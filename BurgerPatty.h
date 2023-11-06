/**
 * @file BurgerPatty.h
 * @brief Header file for the BurgerPatty class, which is a subclass of BeefBurger.
 */
#ifndef BURGERPATTY_H
#define BURGERPATTY_H
#include "BeefBurger.h"
class BurgerPatty : public BeefBurger{
    public:
        BurgerPatty();
        virtual void add(BeefBurger* base);
};
#endif