#include "Director.h"

#include "Builder.h"

Director::Director( Builder* pBuilder) : m_pBuilder( pBuilder)
{
    
}
Director::~Director()
{

}

void Director::Constructor()
{
    pBuilder->BuilderStepFirst();
    pBuilder->BuilderStepSecond();
    pBuilder->BuilderStepThird();
}





