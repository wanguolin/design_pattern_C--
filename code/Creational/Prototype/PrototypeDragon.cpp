#include "PrototypeDragon.h"
#include <iostream>

using namespace std;

PrototypeDragon::PrototypeDragon() : m_num( 0)
{
    cout << "I'm Dragon:" << endl;
}

PrototypeDragon::PrototypeDragon( PrototypeDragon& cpObj)
{
    cout << "Cloning Dragon..." << ++cpObj.m_num <<  endl;
}

Prototype* PrototypeDragon::Clone()
{
    return new PrototypeDragon( *this);
}

PrototypeDragon::~PrototypeDragon()
{

}
