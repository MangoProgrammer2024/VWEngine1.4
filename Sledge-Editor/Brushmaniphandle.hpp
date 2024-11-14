//Brushmaniphandle.hpp
#pragma once 
#ifndef BRUSHMANIPHANDLE_HPP
#define BRUSHMANIPHANDLE_HPP

#include <math.h>
#include <string.h>

template<typename _BrushHandleModule>
class BrushModule{
  public:

  _BrushHandleModule operator ++(const std::string& gn_bSelectedBrush, std::size_t * gBrushSize, std::array<BrushSize_Plane[]>) = 0;
  const _BrushHandleModule operator $null(const std::string&& gn_bDeletedBrush, std::size_t * gn_bBrushSize = NULL, std::array<NULL>)const;
};



#endif
