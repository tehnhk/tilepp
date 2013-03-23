#include <iostream>
#include <string.h>
#include "drawer.h"
#include "game.h"
Game NewGame;

int main(int argc, char **argv) {
  //std::cout << argv[1] << argc << std::endl;
  //that was just check for arguments count
  NewGame.Init(argc,argv);
  return 0;
}
