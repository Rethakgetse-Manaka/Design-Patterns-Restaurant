#ifndef VALETFACTORY_H
#define VALETFACTORY_H

class ValetService;

class ValetFactory {
public:
    virtual ValetService* createValet() = 0;
    virtual ~ValetFactory() {}
};

#endif