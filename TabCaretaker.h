#ifndef TABCARETAKER_H
#define TABCARETAKER_H

#include <vector>
#include "TabMemento.h"

/**
 * @brief The TabCaretaker class is responsible for managing the mementos of the tabs.
 * 
 */
class TabCaretaker {
public:
    /**
     * @brief Adds a new memento to the caretaker.
     * 
     * @param memento The memento to be added.
     */
    void addMemento( TabMemento* memento);

    /**
     * @brief Returns the memento at the specified index.
     * 
     * @param index The index of the memento to be returned.
     * @return TabMemento* The memento at the specified index.
     */
    TabMemento* getMemento(int index) ;

    /**
     * @brief Returns a vector of all the mementos.
     * 
     * @return std::vector<TabMemento*> A vector of all the mementos.
     */
    std::vector<TabMemento*> getMementos();

    /**
     * @brief Returns the number of mementos in the caretaker.
     * 
     * @return size_t The number of mementos in the caretaker.
     */
    size_t getMementoCount();

    /**
     * @brief Removes the specified memento from the caretaker.
     * 
     * @param memento The memento to be removed.
     */
    void removeMemento(TabMemento* memento);

private:
    std::vector<TabMemento*> mementos;
};

#endif
