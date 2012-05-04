#include "Target.h"
#include "Adapter.h"

int main()
{
    Target* ptr_target = new Adapter();
    ptr_target->Request();
    delete ptr_target;

    return 0;
}
