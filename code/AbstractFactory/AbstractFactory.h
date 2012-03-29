#ifndef _ABSTRACTERFACTORY_H_
#define _ABSTRACTERFACTORY_H_

class AbstractTeenager;

class AbstractFactory
{
    public:
        AbstractFactory(){}
        virtual ~AbstractFactory(){}

        virtual AbstractTeenager* CreateNormal()     = 0;
        virtual AbstractTeenager* CreateLiterature() = 0;

};


#endif

