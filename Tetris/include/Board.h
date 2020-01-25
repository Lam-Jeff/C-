#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"

const int HEIGHT = 20;
const int WITDH = 10;

const int start_X = 0;
const int start_Y = 5;
enum {
  FREE,
  FILLED
};
class Board {
  private :
    Piece currentPiece;

  public :
    int area[WITDH][HEIGHT];

    Board();

    void setCurrentPiece (Piece p) {this->currentPiece = p;}
    Piece getCurrentPiece () {return currentPiece;}

    bool isMovePossible ();
    bool isPieceRotable (int o);

    void flood (int i, int j, int piece_x, int piece_y, int k, int o, int value, bool visited [][SIZE]);
    void floodFill (int i, int j, int piece_x, int piece_y, int o, int value );

    void newPiece(Piece p);
    void drawPiece(Piece p);
   

    // SLOT 
    void moveDown();
    void moveRight();
    void moveLeft();

    void rotateLeft();
    void rotateRight();

    void dropPiece();
    void deleteLine(int line);

    bool isgameOver ();
};

#endif
