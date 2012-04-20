#include "Singleton.h"
#include <cstdlib>

int main()
{
    Singleton* ptr_first = Singleton::Instance();
    Singleton* ptr_second = Singleton::Instance();

    ptr_first->GetThisAddr();
    ptr_second->GetThisAddr();

    delete ptr_first;
    ptr_first = ptr_second = NULL;
}
