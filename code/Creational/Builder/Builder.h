#ifndef _BUILDER_H_
#define _BUILDER_H_

class Builder
{
    public:
        Builder(){}
        virtual ~Builder(){}

        virtual BuilderStepFirst()  = 0;
        virtual BuilderStepSecond() = 0;
        virtual BuilderStepThird    = 0;
};

#endif
