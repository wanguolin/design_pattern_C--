#ifndef _ENGLISHBUILDER_H_
#define _ENGLISHBUILDER_H_

#include "Builder.h"

class EnglishBuilder : public Builder
{
    public:
        EnglishBuilder();
        virtual ~EnglishBuilder();
        virtual void BuilderStepFirst();
        virtual void BuilderStepSecond();
        virtual void BuilderStepThird();
};

#endif
