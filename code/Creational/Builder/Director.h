#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

class Builder;

class Director 
{
    private:
        Builder* m_pBuilder;
    public:
        Director( Builder* m_pBuilder);
        ~Director();
        void Constructor();
    

};


#endif
