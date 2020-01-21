#include "Board.h"


Board::Board() {
  for (int i = 0; i < WITDH; i++) {
    for (int j = 0; j < HEIGHT; j++) {
      area[i][j] = FREE;
    }
  }
}
