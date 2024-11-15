//Grid.hpp
#pragma once
#ifndef GRID_HPP
#define GRID_HPP

#include <math.h>
#include <string.h>

template<typename _Grid>
class Grid{
public:
 using float GridPower;
 enum GRID_ITERATOR{ };

 std::array<GridPower gRow[32], GridPower gColumn[32]>;
 std::array<GridPower gRow[64], GridPower gColumn[64]>;
 std::array<GridPower gRow[132], GridPower gColumn[132]>;

 const int g_GridColorTheme[] const = 0; enum g_GridTheme{ OCEANIA = 0, DARK, WHITE };
 void CreateG_PixelDescriptor(){ PIXELFORMATDESCRIPTOR * gpd };

 //grid id buttons
 template<typename _ID>
 static enum g_GridButtonType{ g_ToggleButton = 0, g_PressButton };
 static int g_GridLock;
 static int g_GridFree;
 static int g_GridUnlink;

 const _ID !==(static int g_id)const = 0;

 //close


};

#endif
