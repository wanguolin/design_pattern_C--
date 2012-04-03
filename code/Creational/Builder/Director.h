#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

class Director;

class Director 
{
    public:
        Director();
        ~Director();
        void Constructor();
    
    private:
        Builder* m_pBuilder;

};


#endif
