#ifndef CUSTOMERHANDLER_H
#define CUSTOMERHANDLER_H

class CustomerHandler
{
private:
    CustomerHandler* next;
public:
    CustomerHandler();
    void add(CustomerHandler* n);
    ~CustomerHandler();
    virtual void handleRequest();
};


#endif