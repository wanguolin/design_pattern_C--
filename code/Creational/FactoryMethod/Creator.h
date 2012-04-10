#ifndef _CREATOR_H_
#define _CREATOR_H_

class Product;

class Creator
{
    public:
        Creator();
        virtual ~Creator();
        Product* AnOperation(); 
    protected:
        Product* FactoryMethod();

    private:
        Product* _product;
};

#endif


