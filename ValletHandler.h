#ifndef VALLETHANDLER_H
#define VALLETHANDLER_H

#include "CustomerHandler.h"

class ValletHandler: public CustomerHandler
{
private:
    /* data */
public:
    ValletHandler(/* args */);
    void valletRequest();
    ~ValletHandler();
};



#endif