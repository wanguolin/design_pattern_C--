#ifndef _PROTOTYPEGRAGON_H_
#define _PROTOTYPEGRAGON_H_

#include "Prototype.h"

class PrototypeDragon : public Prototype
{
    public:
        PrototypeDragon();
        PrototypeDragon( PrototypeDragon& );
        virtual Prototype* Clone();
        virtual ~PrototypeDragon();
        unsigned int m_num;
};
#endif
