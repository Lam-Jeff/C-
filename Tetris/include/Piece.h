#ifndef PIECE_H
#define PIECE_H

#include "shapes.h"

enum {
  CYAN = 1,
  YELLOW,
  RED,
  PINK,
  BROWN,
  GREEN,
  PURPLE
};



class Piece {
  private :
    int orientation;
    int couleur;
    int forme;

    int X;
    int Y;

  public :
    Piece ();
    Piece (int orientation = 1, int forme);


    void setForme (int f) {this->forme = f;}
    void setOrientation (int o) {this->orientation = o;}
    void setCouleur (int c) {this->couleur = c;}

    int getForme () {return forme;}
    int getOrientation {return orientation;}
    int getCouleur () {return couleur}

    //Position
    void setX (int x) {this->X = x;}
    void setY (int y) {this->Y = y;}

    int getX ()  {return X;}
    int getY ()  {return Y;}
};

#endif
