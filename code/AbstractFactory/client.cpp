#include <iostream>
#include <vector>


#include "AbstractFactory.h"
#include "AbstractTeenager.h"

#include "PMFactory.h"
#include "ProgrammerFactory.h"



using namespace std;
typedef vector<AbstractTeenager*> _v_ab_teenager;

int main()
{
    AbstractFactory* ptr_pm_factory         = new PMFactory;
    AbstractFactory* ptr_programmer_factory = new ProgrammerFactory;

    _v_ab_teenager v;

    v.push_back( ptr_programmer_factory->CreateNormal());
    v.push_back( ptr_programmer_factory->CreateLiterature());
    v.push_back( ptr_pm_factory->CreateNormal());
    v.push_back( ptr_pm_factory->CreateLiterature());

    for ( _v_ab_teenager::iterator it = v.begin(); it != v.end(); ++it)
        delete *it;
    v.clear();

    delete ptr_programmer_factory;
    ptr_programmer_factory = NULL;

    delete ptr_pm_factory;
    ptr_pm_factory = NULL;

    return 0;
}
