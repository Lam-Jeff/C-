#include "Piece.h"

Piece::Piece() {}

Piece::Piece (int orientation = 1, int forme) {
  this->forme = forme;
  this->orientation = orientation;
}
