#ifndef _PROTOTYPEPHOENIX_H_
#define _PROTOTYPEPHOENIX_H_

#include "Prototype.h"

class PrototypePhoenix : public Prototype
{
    public:
        PrototypePhoenix();
        PrototypePhoenix( PrototypePhoenix& );
        virtual Prototype* Clone();
        virtual ~PrototypePhoenix();
        unsigned int m_num;
        
};
#endif
