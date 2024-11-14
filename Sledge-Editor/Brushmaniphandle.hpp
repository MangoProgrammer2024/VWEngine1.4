//Brushmaniphandle.hpp
#pragma once 
#ifndef BRUSHMANIPHANDLE_HPP
#define BRUSHMANIPHANDLE_HPP

#include <math.h>
#include <string.h>

template<typename _BrushHandleModule>
class g_nbBrushModule{
  public:

  _BrushHandleModule operator ++g_nbBrushSize(const std::string& gn_bSelectedBrush, std::size_t * gBrushSize, std::array<BrushSize_Plane[]>) = 0;
  const _BrushHandleModule operator $null(const std::string&& gn_bDeletedBrush, std::size_t * gn_bBrushSize = NULL, std::array<NULL>)const;
  const _BrushHandleModule operator %g_nbBin(const std::string& g_nbBrushName = g_nbGlobal_Key, std::size_t * g_nbBrushSize = sizeof(brush_t * b), std::array<std::size_t * brush[]>, const char&&saveFile)const;
};



#endif
