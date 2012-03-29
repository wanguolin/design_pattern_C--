#ifndef _PROGRAMMERFACTORY_H_
#define _PROGRAMMERFACTORY_H_

#include "AbstractFactory.h"

class AbstractFactory;

class ProgrammerFactory : public AbstractFactory
{
    public:
        ProgrammerFactory();
        virtual ~ProgrammerFactory();

        virtual AbstractTeenager* CreateNormal();
        virtual AbstractTeenager* CreateLiterature();
};

#endif
