/*
Класс рисовальщика. Код.

TODO: Чего-нибудь нарисовать
*/

#include "drawer.h"

//Основная прорисовочная функция

void Display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  for (int i=0;i<10;i++)    //Начинаем рисовать чушь
  {
    glColor3f(1,0.5,0.5); //Серый цвет
    glBegin(GL_QUADS);
    glVertex2f(i*2,i*2);
    glVertex2f(i*2,(i*2)+2);
    glVertex2f((i*2)+2,(i*2)+2);
    glVertex2f((i*2)+2,i*2);
    glEnd();
  }
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
  gluOrtho2D(0,W,H,0);
  glClearColor(0,0,0,0);
  glutDisplayFunc(Display);
  glutMainLoop();
}

