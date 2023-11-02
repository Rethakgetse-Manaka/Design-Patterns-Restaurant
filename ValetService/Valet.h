#ifndef VALET_H
#define VALET_H

#include "ValetService.h"

class Valet : public ValetService {
public:
    void parkVehicle() override;
    void returnVehicle() override;
};

#endif
