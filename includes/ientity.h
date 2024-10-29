//ientity.h
#pragma once 

#ifndef IENTITY_H
#define IENTITY_H

#endif

#include "sysincludes.h"

typedef struct ientity{
  iboolean iSignaled;

  ientity * i;

  enum iEntityMode{ istatic = 0, irigged = 1, iphysics = 2 };

    const char * EntityId(ientity * i) const;

    void EntityAddEpair(ientity * i, const char * ikey, const char * ivalue);
    ientity * Entity_Epair();
};
