#ifndef TABCARETAKER_H
#define TABCARETAKER_H

#include <vector>
#include "TabMemento.h"

class TabCaretaker {
public:
    void addMemento( TabMemento memento);
    TabMemento getMemento(int index) ;
    size_t getMementoCount();

private:
    std::vector<TabMemento> mementos;
};

#endif
