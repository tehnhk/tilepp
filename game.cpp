#include "game.h"
#include "drawer.h"
Drawer NewDrawer;
void Game::Init(int argc, char **argv){
  NewDrawer.Init(argc,argv);
}