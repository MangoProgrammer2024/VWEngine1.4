//vectors.h
#pragma once
#ifndef VECTORS_H
#define VECTORS_H

template<typename vec>class vector

 public:

 // operator + has float value
 // operator - has unsigned int value
 // operator * has int value
 // operator % has boolean value

 vec operator + (vector, float v);
 vec operator - (vector, unsigned int vsub);
 vec operator * (vector, int vscalar);
 vec operator % (vector, bool vscale);

#endif
