#include "game.h"
#include <string.h>
Drawer NewDrawer;
void Game::Init(int argc, char **argv){
  if ((argc>1) && ( strcmp(argv[1],"-g") == 0  ))
    NewDrawer.SetGrid(false);  
NewDrawer.Init(argc,argv);
}
