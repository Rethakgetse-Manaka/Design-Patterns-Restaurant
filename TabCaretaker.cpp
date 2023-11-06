#include "TabCaretaker.h"

void TabCaretaker::addMemento(  TabMemento* memento) {
    mementos.push_back(memento);
}

TabMemento* TabCaretaker::getMemento(int index) {
    if (index >= 0 && static_cast<size_t>(index) < mementos.size()) {
        return mementos[index];
    }
    // Return a default-constructed TabMemento when the index is out of range
    return nullptr;
}
std::vector<TabMemento *> TabCaretaker::getMementos()
{
    return mementos;
}
size_t TabCaretaker::getMementoCount()
{
    return mementos.size();
}

void TabCaretaker::removeMemento(TabMemento *memento)
{
    for(std::vector<TabMemento*>::iterator it = mementos.begin();it != mementos.end();++it)
    {
        if((*it)->getCustomerID() == memento->getCustomerID())
        {
            delete *it;
            mementos.erase(it);
            break;
        }
    }

}
