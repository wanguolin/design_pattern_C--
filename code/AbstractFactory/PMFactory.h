#ifndef _PMFACTORY_H_
#define _PMFACROTY_H_

#include "AbstractFactory.h"

class AbstractTeenager;

class PMFactory : public AbstractFactory
{
    public:
        PMFactory();
        virtual ~PMFactory();

        virtual AbstractTeenager* CreateNormal();
        virtual AbstractTeenager* CreateLiterature();
};


#endif
