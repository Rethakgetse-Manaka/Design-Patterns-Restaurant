#include "Chef.h"

Plate* Chef::plate;

Chef::~Chef()
{
}

void Chef::setPlate(Plate *p)
{
    plate = p;
}
