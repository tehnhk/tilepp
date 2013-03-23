/*
Класс рисовальщика. Код.

TODO: Чего-нибудь нарисовать
*/

#include "drawer.h"

bool grid = true;

//Основные константы класса Drawer

const int W = 800; //Ширина экрана
const int H = 600; //Высота экрана
const int TW = 32; //Ширина тайла
const int TH = 32; //Высота тайла

void SetGrid(bool grd)
{
  grid = grd;
}

//Сетка
void DrawGrid()
{
  if(grid)
  {
    for (int i=0;i<25;i++)
    {
      glColor3f(0.5,0.5,0.5);
      glBegin(GL_LINES);
      glVertex2f(i*TW,0);
      glVertex2f(i*TW,H);
      glEnd();
      glBegin(GL_LINES);
      glVertex2f(0,i*TH);
      glVertex2f(W,i*TH);
      glEnd();
    }
  }
}

//Основная прорисовочная функция

void Display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  DrawGrid();
  glutSwapBuffers();
  glFlush();
}


//Инициализация glut

void Drawer::Init(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize(W,H);
  glutInitWindowPosition(200,200);
  glutInitDisplayMode(GLUT_RGB);
  glutCreateWindow("Tile++");
  glViewport(0,0,W,H);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(0,W,H,0,0,1.0);
  glClearColor(0,0,0,0);
  glutDisplayFunc(Display);
  glutMainLoop();
}

