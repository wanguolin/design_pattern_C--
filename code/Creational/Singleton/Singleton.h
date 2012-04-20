#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton
{
    public:
        static Singleton* Instance();
        void GetThisAddr();
        ~Singleton();

    protected:
        Singleton();
        static Singleton* _instance;
};

#endif
