#include <QApplication>
#include <QPushButton>

#include "Board.h"

int main (int argc, char **argv) {
  QApplication a(argc, argv);
  QWidget window;
  window.setFixedSize (WITDH *  40, HEIGHT * 40);

  window.show();
  return a.exec();
}
