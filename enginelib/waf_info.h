//waf_info.h
#pragma once 
#ifndef WAF_INFO_H
#define WAF_INFO_GH

namespace info{

typedef std::string info;

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


};  




#endif
