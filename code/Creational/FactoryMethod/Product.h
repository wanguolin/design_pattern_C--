#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>

using namespace std;

class Product
{
    public:
        Product(){ cout << "Product Constructor" << endl; }
        virtual ~Product(){ cout << "Product Destructor" << endl;  }
};

#endif
