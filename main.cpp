#include <iostream>
#include "drawer.h"
#include "game.h"

Game NewGame;

int main(int argc, char **argv) {
  //Инициализируем прорисовщик
  //drawer.Init(argc,argv);
  NewGame.Init(argc,argv);
  return 0;
}
