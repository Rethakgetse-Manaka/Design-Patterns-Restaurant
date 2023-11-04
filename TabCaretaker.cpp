#include "TabCaretaker.h"

void TabCaretaker::addMemento(  TabMemento memento) {
    mementos.push_back(memento);
}

TabMemento TabCaretaker::getMemento(int index) {
    if (index >= 0 && static_cast<size_t>(index) < mementos.size()) {
        return mementos[index];
    }
    // Return a default-constructed TabMemento when the index is out of range
    return TabMemento(0, "Default", nullptr);
}
size_t TabCaretaker::getMementoCount(){
    return mementos.size();
}
