/**
 * @brief The Observer class is an abstract class that defines the interface for objects that should be notified of changes in the AccountingSystem.
 * 
 */
#ifndef OBSERVER_H
#define OBSERVER_H
#include "AccountingSystem.h"

class Observer {
public:
    /**
     * @brief This method is called by the AccountingSystem to notify the Observer of a change.
     * 
     */
    virtual void update() = 0;

    /**
     * @brief This method is used to set the AccountingSystem that the Observer should be registered with.
     * 
     * @param accountingSystem A pointer to the AccountingSystem object.
     */
    virtual void setAccountingSystem(AccountingSystem *accountingSystem) = 0;
};

#endif
