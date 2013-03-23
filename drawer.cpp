/*
Класс рисовальщика. Код.

TODO: Чего-нибудь нарисовать
*/

#include "drawer.h"

//Основная прорисовочная функция

void Display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}


//Инициализация glut

void Drawer::Init(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize(W,H);
  glutInitWindowPosition(200,200);
  glutInitDisplayMode(GLUT_RGB);
  glutCreateWindow("TileCPP");
  glutDisplayFunc(Display);
  glutMainLoop();
}

