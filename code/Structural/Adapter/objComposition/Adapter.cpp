#include "Adapter.h"
#include "Adaptee.h"

Adapter::Adapter( Adaptee* p) : _ptr_adaptee( p)
{

}

Adapter::~Adapter()
{
    delete _ptr_adaptee;
}

void Adapter::Request()
{
    _ptr_adaptee->SpecificRequest();
}

