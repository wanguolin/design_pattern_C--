#include "Adaptee.h"
#include <iostream>

using namespace std;

Adaptee::Adaptee()
{

}

Adaptee::~Adaptee()
{

}

void Adaptee::SpecificRequest()
{
    cout << "Final Provider from Adaptee" << endl;
}
