#include "Product.h"

#include "ConcreteProduct.h"
#include "ConcreteCreator.h"
#include <iostream>

using namespace std;

ConcreteCreator::ConcreteCreator()
{
    cout << "ConcreteCreator Constructor" << endl;
}

ConcreteCreator::~ConcreteCreator()
{
    cout << "ConcreteCreator Destructor" << endl;
}

Product* ConcreteCreator::AnOperator()
{
    return FactoryMethod();
}

Product* ConcreteCreator::FactoryMethod()
{
    if( _product != NULL) 
        _product = new ConcreteProduct;
    return _product;
}
