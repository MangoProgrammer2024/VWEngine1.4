//Brushmaniphandle.hpp
#pragma once 
#ifndef BRUSHMANIPHANDLE_HPP
#define BRUSHMANIPHANDLE_HPP

#include <math.h>
#include <string.h>

template<typename _BrushHandleModule>
class BrushModule{
  public:
  //handle brush size
  _BrushHandleModule operator ++g_nbBrushSize(const std::string& gn_bSelectedBrush, std::size_t * gBrushSize, std::array<BrushSize_Plane[]>) = 0;
  //handles deleted brush data
  const _BrushHandleModule operator $null(const std::string&& gn_bDeletedBrush, std::size_t * gn_bBrushSize = NULL, std::array<NULL>)const;
  //handles brush bin
  const _BrushHandleModule operator %g_nbBin(const std::string& g_nbBrushName = g_nbGlobal_Key, std::size_t * g_nbBrushSize = sizeof(brush_t * b), std::array<std::size_t * brush>, const char&&saveFile)const;
};



#endif
