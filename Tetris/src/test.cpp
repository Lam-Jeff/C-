#include <QApplication>
#include <QPushButton>

int main (int argc, char **argv) {
  QApplication a(argc, argv);
  QPushButton bouton ("Salut !");
  bouton.setText ("Pimp my button !");
  bouton.show();
  return a.exec();
}
