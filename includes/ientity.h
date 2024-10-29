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

    iconst char * EntityId(ientity * i)iconst;

};
