#ifndef _BUILDER_H_
#define _BUILDER_H_

class Builder
{
    public:
        Builder(){}
        virtual ~Builder(){}

        virtual void BuilderStepFirst()  = 0;
        virtual void BuilderStepSecond() = 0;
        virtual void BuilderStepThird()  = 0;
};

#endif
