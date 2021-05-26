#ifndef __QUADRADO_H__
#define __QUADRADO_H__

#include "gl_canvas2d.h"

class Quadrado{
  float lado;
  float posicao;
  float r, g, b; //cor do quadrado
  float direcao;
  float y;

public:
  Quadrado()
  {
     lado  = 60;
     posicao = 200;
     y = 200;
     r = 1;
     g = 0;
     b = 0;

     direcao = 0;
  }

  void anima()
  {
      posicao += direcao;
      CV::clear(0,0,0);
      CV::color(r, g, b);
      CV::rectFill(posicao, y, posicao+lado, y+lado);
  }

  void move(int delta) //direita ou esquerda.
  {
      if( delta > 0 )
      {
          direcao = 0.4;
      }


      if( delta < 0 )
      {
          direcao = -0.4;
      }
  }
};

#endif

