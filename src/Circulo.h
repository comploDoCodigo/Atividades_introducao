#ifndef __CIRCULO_H__
#define __CIRCULO_H__

#include "gl_canvas2d.h"

class Circulo{
  float raio;
  float posicao;
  float r, g, b; //cor da bola
  float direcao;

public:
  Circulo()
  {
     raio  = 50;
     r = 1;
     g = 0;
     b = 0;

  }

  void anima(float x, float y)
  {

      CV::clear(0,0,0);
      CV::color(r, g, b);
      CV::circleFill(x, y, raio, 50);
  }
};

#endif

