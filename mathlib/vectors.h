//vectors.h
#pragma once
#ifndef VECTORS_H
#define VECTORS_H

template<typename vec>class vector{
 public:
//vector type t has an float value
//vec3_t has an array of 3
//vec4_t has an array of 4
//vec6_t has an array of 6
typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];
 // operator + has float value
 // operator - has unsigned int value
 // operator * has int value
 // operator % has boolean value
 vec operator + (vector, float v);
 vec operator - (vector, unsigned int vsub);
 vec operator * (vector, int vscalar);
 vec operator % (vector, bool vscale);
  //vector functions
  //vector snap is a snap to for a vector
  int vecsnap( int snap, bool snapped )
  //handles vector to snap to grid
  void snaptogrid( vec_t * t, vector v);
  //reset snap returns snap as false
  bool snapreset(vec_t * current, vector v){
    if(!current->vec_t vp, v.snaptogrid(current->vec_t))
     {
        return false;
     }
  };
  //get vectors matrix position
  const void vecmatrix(matrix_m * m, vector * v)const;
  //vector dot product
  #define VECTOR_DOT (x, y) (x[0] * y[0] + x[1] * y[1] + x[2] * y[2])

};

#endif
