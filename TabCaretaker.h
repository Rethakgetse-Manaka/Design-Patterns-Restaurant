#ifndef TABCARETAKER_H
#define TABCARETAKER_H

#include <vector>
#include "TabMemento.h"

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
