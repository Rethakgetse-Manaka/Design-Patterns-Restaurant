#ifndef CUSTOMERHANDLER_H
#define CUSTOMERHANDLER_H

class CustomerHandler
{
private:
    CustomerHandler* next;
public:
    CustomerHandler(/* args */);
    ~CustomerHandler();
    virtual void handleRequest();
};


#endif