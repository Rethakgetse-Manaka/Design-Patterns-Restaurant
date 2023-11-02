#include "ValetFactoryImpl.h"

ValetService* ValetFactoryImpl::createValet() {
    return new Valet();
}
