//waf_info.h
#pragma once 
#ifndef WAF_INFO_H
#define WAF_INFO_GH

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

  void iterate_info(info * i, std::iterator = i(::_iterator_ptr* i), static char iBuffIterator);

};  




#endif
