#include "Builder.h"
#include "Director.h"

Director::Director( Builder* pBuilder) : m_pBuilder( pBuilder)
{
    
}
Director::~Director()
{

}

void Director::Constructor()
{
    m_pBuilder->BuilderStepFirst();
    m_pBuilder->BuilderStepSecond();
    m_pBuilder->BuilderStepThird();
}





