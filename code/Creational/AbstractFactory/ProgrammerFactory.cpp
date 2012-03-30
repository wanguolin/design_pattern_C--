#include <iostream>

#include "ProgrammerFactory.h"

#include "NormalTeenagerProgrammer.h"
#include "LiteratureTeenagerProgrammer.h"

ProgrammerFactory::ProgrammerFactory()
{
    std::cout << " ProgrammerFactory Constructor " << std::endl; 
}

ProgrammerFactory::~ProgrammerFactory()
{
    std::cout << " ProgrammerFactory Destructor " << std::endl;
}

AbstractTeenager* ProgrammerFactory::CreateNormal()
{
    return new NormalTeenagerProgrammer;
}

AbstractTeenager* ProgrammerFactory::CreateLiterature()
{
    return new LiteratureTeenagerProgrammer;
}

