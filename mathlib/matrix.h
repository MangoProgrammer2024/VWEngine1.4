//matrix.h
#pragma once 
#ifndef MATRIX_H
#define MATRIX_H

template<typename mcase>
class matrix_m{
 public:
  // operator %* translates
  // operator %^ rotates
  // operator %& scales
  mcase operator %*(matrix_m& m, float translate);
  mcase operator %^(matrix_m& m, float rotation);
  mcase operator %&(matrix_m& m, float scale);
  //matrix axis
  float matrix_x[4];
  float matrix_y[4];
  float matrix_z[4];
   //matrix variable
   typedef float matrix_var;
   //matrix functions
    enum{
     TRANSLATE = 0,
     ROTATE = 1,
     SCALE = 2
    }MatrixMode;
   //matrix identity
   virtual void matrix_identity(matrix_m& mId, float axis[4], matrix_m * function);
   //matrix mode
   void matrix_mode(matrix_m& m, matrix_m * mode);
   //matrix axis macros
   #define MATRIX_X_AXIS 000x000
   #define MATRIX_Y_AXIS 111x111
   #define MATRIX_Z_AXIS 222x222
   
};

#endif
