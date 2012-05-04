#ifndef _TARGET_H_
#define _TARGET_H_

class Target
{
    public:
        Target(){};
        ~Target(){};

    virtual void Request() = 0;
};

#endif
