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

};

#endif
