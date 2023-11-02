#ifndef VALETSERVICE_H
#define VALETSERVICE_H

class ValetService {
public:
    virtual void parkVehicle() = 0;
    virtual void returnVehicle() = 0;
    virtual ~ValetService() {}
};

#endif
