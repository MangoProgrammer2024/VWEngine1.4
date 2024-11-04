//scriptentity.h
#ifndef SCRIPTENTITY_H
#define SCRIPTENTITY_H

#include "includes/qentity.h"

template<typename entScript>
class ScriptEntity{
public:

  bool castedScript;
  const char * targetname;
  int spawnflags;

  void scriptentity(qentity  q, ScriptEntity script){
      if(q.EntityId("targetname"), script.castedScript == true){
         script.spawnflags = 64;
         static_cast<struct qentity>class ScriptEntity;
          return true;
      }
  };





};


#endif
