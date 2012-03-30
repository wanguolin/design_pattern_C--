#include <iostream>
#include "PMFactory.h"

#include "AbstractTeenager.h"

#include "NormalTeenagerPM.h"
#include "LiteratureTeenagerPM.h"


PMFactory::PMFactory()
{
    std::cout << " PMFactory Constructor " << std::endl;
}

PMFactory::~PMFactory()
{
    std::cout << " PMFactory Destructor " << std::endl;
}

AbstractTeenager* PMFactory::CreateNormal()
{
    return new NormalTeenagerPM;
}

AbstractTeenager* PMFactory::CreateLiterature()
{
    return new LiteratureTeenagerPM;
}
