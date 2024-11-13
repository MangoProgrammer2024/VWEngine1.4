/*
 Filters.h 
*/
#pragma once 
#ifndef FILTERS_H
#define FILTERS_H

 struct Filter{
  int g_nbFilterId;

  virtual void g_nbAddFilter(const char * gFilterItem);
  const char * gFilterItem(Filter * filter)const;

    template<typename _Filter>
     _Filter{
      const operator f&*(static_cast<_Filter>(Filter))const;
      operator f^(Filter&) { return Filter };
     };

   enum g_nbFilterType{
    TEXTURE_FILTER = 0,
    BRUSH_FILTER = 1,
    ENTITY_FILTER = 2
   };

   struct __g_nbGlobalFilterTable__{
        void Flush();
        void Delete();
        void Add();

       static float g_nbMaxFilterItems[];

   };

 };

#endif
