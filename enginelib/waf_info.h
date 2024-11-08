//waf_info.h
#pragma once 
#ifndef WAF_INFO_H
#define WAF_INFO_H

namespace info{

typedef std::string cinfo;

int info_flag;

  enum classname{
    worldspawn = 0,
    scriptmodel = 1,
    brushmodel = 2
  };

  enum nameinfo{
    info_zone = 0,
    info_volume = 1,
    info_brush = 2,
    info_entity = 3,
    info_model = 4
  };

  const cinfo(info * info_iterator)const;

    virtual void info_zone_flags(info * name, int info_flag);
    virtual void info_volume_flags(info * name, int info_flag);
    virtual void info_brush_flags(info * name, int info_flag);
    virtual void info_entity_flags(info * name, int info_flag);
    virtual void info_model_flags(info * name, int info_flag);

  const char * BRUSH_MAYJOR; const char * ENTITY_MAYJOR; const char * MODEL_MAYJOR;

  void iterate_info(info * i, std::iterator = i(::_iterator_ptr* i), static char iBuffIterator)
/*
===================
    WORLDSPAWN
===================
*/
   void Worldspawn(info * entity, info infoNode)
    {
      //if classname 
      if(entity->classname = worldspawn)
       {
         //iterate node info
         infoNode.iterate_info(entity->classname);
         info * i = (info*)malloc(std::size_t*node(info));
          return i;

           //determine worldspawn type
           int classType = info_flag;

          switch(classType)
           {
                case class_brush:
                  entity->nameinfo = info_brush; infoNode.info_brush_flags(entity->BRUSH_MAYJOR, info_flag = 1);
                 break;

                case class_actor:
                  entity->nameinfo = info_entity; infoNode.info_entity_flags(entity->ENTITY_MAYJOR, info_flag = 2);
                 break;

                case class_model:
                  entity->nameinfo = info_model; infoNode.info_model_flags(entity->MODEL_MAYJOR, info_flag = 3);
                 break;
          } 
        }       
    };

  

};  




#endif
