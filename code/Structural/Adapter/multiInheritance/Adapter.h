#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target, private Adaptee
{
    public:
        Adapter();
        ~Adapter();

    virtual void Request();

};

#endif

