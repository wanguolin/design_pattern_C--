#include "Adapter.h"

Adapter::Adapter()
{

}

Adapter::~Adapter()
{

}

void Adapter::Request()
{
    Adaptee::SpecificRequest();
}

