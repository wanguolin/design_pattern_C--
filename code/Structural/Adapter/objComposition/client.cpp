#include "Target.h"
#include "Adapter.h"
#include "Adaptee.h"

int main()
{
    Target* ptr_target = new Adapter( new Adaptee);
    ptr_target->Request();
    delete ptr_target;

    return 0;
}
