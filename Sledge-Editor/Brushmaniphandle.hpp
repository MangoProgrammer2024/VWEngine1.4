//Brushmaniphandle.hpp
#pragma once 
#ifndef BRUSHMANIPHANDLE_HPP
#define BRUSHMANIPHANDLE_HPP

#include <math.h>
#include <string.h>

template<typename _BrushHandleModule>
class g_nbBrushModule{
  public:

  int gn_bIObserver;
  int g_nbISeriousObserver[];

   virtual void return_Observer(g_nbBrushModule * iobserver){
    if(iobserver->gn_bIObserver)
    {
      std::size_t * iSize = iobserver->gn_bIObserver;
      return iSize;
    }

    if(iobserver->g_nbISeriousObserver)
    {
      std::size_t * iSize = iobserver->g_nbISeriousObserver;
      return iSize;
    }
   };

  using malloc = g_nbmalloc;

  const virtual void _HandleModule_Failed(g_nbBrushModule ** g_nbModule){
    if(!g_nbBrushModule&&g_nbModule)
    {
      g_nbBrushModule * module_f = (g_nbBrushModule*)g_nbmalloc(sizeof(g_nbBrushModule));
      return module_f;
      
        return false;
    }
  }const;

  _BrushHandleModule operator ++g_nbBrushSize(const std::string& gn_bSelectedBrush, std::size_t * gBrushSize, std::array<BrushSize_Plane[]>) = 0;
  const _BrushHandleModule operator $null(const std::string&& gn_bDeletedBrush, std::size_t * gn_bBrushSize = NULL, std::array<NULL>)const;
  const _BrushHandleModule operator %g_nbBin(const std::string& g_nbBrushName = g_nbGlobal_Key, std::size_t * g_nbBrushSize = sizeof(brush_t * b), std::array<std::size_t * brush[]>, const char&&saveFile)const;
};



#endif
