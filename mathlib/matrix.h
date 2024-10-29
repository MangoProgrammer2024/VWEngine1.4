//matrix.h
#pragma once 
#ifndef MATRIX_H
#define MATRIX_H

template<typename mcase>
typedef class matrix_m{
 public:

  mcase operator %*(matrix_m& m, float translate);
  mcase operator %^(matrix_m& m, float rotation);
  mcase operator %&(matrix_m& m, float scale);


};

#endif
