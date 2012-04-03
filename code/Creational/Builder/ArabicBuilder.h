#ifndef _ARABICBUILDER_H_
#define _ARABICBUILDER_H__

#include "Builder.h"

class ArabicBuilder : public Builder
{
    public:
        ArabicBuilder();
        ~ArabicBuilder();
        virtual void BuilderStepFirst();
        virtual void BuilderStepSecond();
        virtual void BuilderStepThird();
};

#endif
