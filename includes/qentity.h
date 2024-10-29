//ientity.h
#pragma once 

#ifndef IENTITY_H
#define IENTITY_H

#endif

#include "sysincludes.h"

typedef struct qentity{
  iboolean iSignaled;

  qentity * q;

  enum qEntityMode{ qstatic = 0, qrigged = 1, qphysics = 2 };

    const char * EntityId(qentity * q) const;

    void Entity_AddToList(qentity * q, const char * list);
    void Entity_AddEpair(qentity * q, const char * qkey, const char * qvalue);
    void Entity_AddToScene(qentity * q, const char * qkey, const char * qvalue);
    qentity * Entity_Epair();

};
