//qgrid.h
#pragma once
#ifndef QGRID_H
#define QGRID_H

//grid iterator template
template<typename gridIterator>  template<typename _gb>bool gridBoolean;
gridIterator gridHotkey(QString * F);
class qgrid{
public:
  //construct the grid
  auto ConstructGrid(bool);
  //determine if grid signaled
  gridBoolean signalGrid();
  //grid drag determine
  gridBoolean dragGrid(qgrid * current);
  /*----------------------------------*/
    //grid variables
    const int q_gRows[];
    const int q_gColumns[];
    //grid power
    typedef float GRIDPOWER;
    typedef GRIDPOWER GRIDPOWER_8[8];
    typedef GRIDPOWER GRIDPOWER_16[16];
    typedef GRIDPOWER GRIDPOWER_24[24];
    typedef GRIDPOWER GRIDPOWER_32[32];
    typedef GRIDPOWER GRIDPOWER_64[64];
    typedef GRIDPOWER GRIDPOWER_96[96];
    typedef GRIDPOWER GRIDPOWER_128[128];
    //change grid power
    bool newPower(qgrid * power);
    /*---------------------------------*/
    //grid pen color (r, g, b)
    typedef double GRIDPEN_COLOR;
    typedef GRIDPEN_COLOR R;
    typedef GRIDPEN_COLOR G;
    typedef GRIDPEN_COLOR B;
    /*---------------------------------*/
    //grid view mode
    typedef enum GRIDCASE;
    GRIDCASE{
      GRID_WIREFRAME_MODE = 0,
      GRID_TEXTURE_MODE = 1,
      GRID_MODEL_MODE = 2,
      GRID_FULL_MODE = 3
    }qGridViewmode;
    //grid axis view
    enum{
      GRID_XY = 0,
      GRID_XY = 1,
      GRID_YZ = 2
    }qGridAxisview;

};

#endif
