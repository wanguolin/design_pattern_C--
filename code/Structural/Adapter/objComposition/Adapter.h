#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "Target.h"

class Adaptee;

class Adapter : public Target 
{
    public:
        Adapter( Adaptee* p);
        ~Adapter();

    virtual void Request();
    private:
        Adaptee* _ptr_adaptee;
};

#endif

