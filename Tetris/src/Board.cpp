#include "Board.h"


Board::Board() {
  for (int i = 0; i < WITDH; i++) {
    for (int j = 0; j < HEIGHT; j++) {
      area[i][j] = FREE;
    }
  }
}


// floodfill algorithm.
// Allow us to draw a piece on the board.
// i, j : indexes for the board
// piece_x, piece_y : indexes for the piece we want to draw
// o : orientation of the piece
// k : form
// value : value of the case
// visited : array with blocks we already visited
void Board::flood (int i, int j, int piece_x, int piece_y, int k, int o, int value, bool visited [][SIZE]) {

  if (piece_x < 0 || piece_x >= SIZE || piece_y < 0 || piece_y >= SIZE || visited[piece_x][piece_y] || Pieces[k][o][piece_x][piece_y]) {
    return ;
  }

  visited [piece_x][piece_y] = true;
  area[i][j] = value;

  flood (i, j - 1, piece_x, piece_y - 1, k, o, value, visited);
  flood (i, j + 1, piece_x, piece_y + 1, k, o, value, visited);
  flood (i - 1, j, piece_x - 1, piece_y, k, o, value, visited);
  flood (i + 1, j, piece_x + 1, piece_y, k, o, value, visited);

}

void Board::floodFill (int i, int j, int piece_x, int piece_y, int o, int value) {
}

void Board::drawPiece (Piece p) {

}

