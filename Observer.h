#ifndef OBSERVER_H
#define OBSERVER_H
#include "AccountingSystem.h"

/**
 * @brief The Observer class is an abstract class that defines the interface for objects that should be notified of changes in the subject.
 */
class Observer {
public:
    /**
     * @brief This method is called by the subject to notify the observer of a change.
     */
    virtual void update() = 0;
    
    /**
     * @brief This method is used to set the accounting system for the observer.
     * 
     * @param accountingSystem A pointer to the accounting system.
     */
    virtual void setAccountingSystem(AccountingSystem *accountingSystem) = 0;
    
    /**
     * @brief This is the destructor for the Observer class.
     */
    virtual ~Observer();
};

#endif
