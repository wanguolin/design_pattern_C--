#include "Creator.h"
#include "ConcreteCreator.h"

int main()
{
    Creator* ptr_base_class = new Creator();
    Creator* ptr_sub_class = new ConcreteCreator();

    ptr_base_class->AnOperation();
    ptr_sub_class->AnOperation();

    delete ptr_base_class;
    delete ptr_sub_class;

}
