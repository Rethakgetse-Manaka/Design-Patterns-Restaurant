#ifndef TABCARETAKER_H
#define TABCARETAKER_H

#include <vector>
#include "TabMemento.h"

/**
 * @brief The TabCaretaker class is responsible for managing the mementos of the tabs.
 * 
 * It provides methods to add, get, and remove mementos, as well as to get the total count of mementos.
 */
class TabCaretaker {
public:
    void addMemento( TabMemento* memento);
    TabMemento* getMemento(int index) ;
    std::vector<TabMemento*> getMementos();
    size_t getMementoCount();
    void removeMemento(TabMemento* memento);

private:
    std::vector<TabMemento*> mementos;
};

#endif
