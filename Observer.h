#ifndef OBSERVER_H
#define OBSERVER_H
#include "AccountingSystem.h"

class Observer {
public:
    virtual void update() = 0;
    virtual void setAccountingSystem(AccountingSystem *accountingSystem) = 0;
};

#endif
