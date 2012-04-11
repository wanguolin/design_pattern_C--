#include <iostream>
#include "Prototype.h"
#include "PrototypeDragon.h"
#include "PrototypePhoenix.h"


int main()
{
    Prototype* ptr_dragon_root  = new PrototypeDragon;
    Prototype* ptr_phoenix_root = new PrototypePhoenix;

    Prototype* ptr_dragon_array[10]  = { NULL }; 
    Prototype* ptr_phoenix_array[10] = { NULL };

    for( int i = 0; i < 10; ++i)
    {
        ptr_dragon_array[i]  = ptr_dragon_root->Clone();
        ptr_phoenix_array[i] = ptr_phoenix_root->Clone();
    }

    for( int j = 0; j < 10; ++j)
    {
        delete ptr_dragon_array[j];
        delete ptr_phoenix_array[j];
        ptr_dragon_array[j]  = NULL;
        ptr_phoenix_array[j] = NULL;
    }

    delete ptr_dragon_root;
    delete ptr_phoenix_root;
}
