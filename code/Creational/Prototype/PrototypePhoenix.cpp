#include "PrototypePhoenix.h"
#include <iostream>

using namespace std;

PrototypePhoenix::PrototypePhoenix() : m_num( 0)
{
    cout << "I'm Phoenix:" << endl;
}

PrototypePhoenix::PrototypePhoenix( PrototypePhoenix& cpObj)
{
    cout << "Cloning Phoenix..." << ++cpObj.m_num << endl;
}

Prototype* PrototypePhoenix::Clone()
{
    return new PrototypePhoenix( *this);
}

PrototypePhoenix::~PrototypePhoenix()
{

}
