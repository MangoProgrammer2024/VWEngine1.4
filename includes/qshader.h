//qshader.h
#ifndef QSHADER_H
#define QSHADER_H

#include "qstuff.h"

struct qshader{
//rgb set values
  int qR;//R
  int qG;//G
  int qB;//B
    //shader image alphaness
    float shaderAlpha;
//shader
void shader(qshader * s, const char * qShadername, bool set);
//shader type
enum{
  normal_shader = 0,
  transparent_shader = 1,
  tool_shader = 2
}shadertype;
//shader positions
float _x(qshader);
float _y(qshader);
float _z(qshader);
//shader image extension
const char * shaderPNG = "*.png"; const char * shaderJPG = "*.jpeg"; const char * dds = "*.dds";

};

#endif
