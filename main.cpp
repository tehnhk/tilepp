#include <iostream>
#include <GL/glut.h>
#include "drawer.h"

Drawer drawer;

int main(int argc, char **argv) {
  
  //Инициализируем прорисовщик
  drawer.Init(&argc,argv);
  return 0;
}
