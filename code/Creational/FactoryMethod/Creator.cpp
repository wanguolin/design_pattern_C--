#include "Creator.h"
#include "Product.h"
#include "ConcreteProduct.h"
#include <iostream>

using namespace std;

Creator::Creator()
{
    _product = NULL;
    cout << "Creator Constructor" << endl;    
}

Creator::~Creator()
{
    delete _product;
    cout << "Creator Destructor" << endl;
}

Product* Creator::FactoryMethod()
{
    if( _product != NULL)
        _product = new Product();
    return _product;
}

Product* Creator::AnOperation()
{
    return FactoryMethod();
}
