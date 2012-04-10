#ifndef _CONCRETECREATOR_H_
#define _CONCRETECREATOR_H_

#include "Creator.h"

class ConcreteCreator : public Creator
{
    private:
        Product* _product;
    protected:
        virtual Product* FactoryMethod();
    public:
        ConcreteCreator();
        virtual ~ConcreteCreator();
        virtual Product* AnOperator();
};

#endif

