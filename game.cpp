#include "game.h"
#include <string.h>
Drawer NewDrawer;
void Game::Init(int argc, char **argv){
  NewDrawer.Init(argc,argv);
  if (argc==2 && ( (strcmp(*argv,"-g")==0) || ((strcmp(*argv,"--grid")==0) )))
    {
      NewDrawer.SetGrid(true);
    }
}
