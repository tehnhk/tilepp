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
    glColor3f(0.5,0.5,0.5); //Серый цвет
    glBegin(GL_QUADS);
    glVertex2f(i*20,i*20);
    glVertex2f(i*20,(i*20)+20);
    glVertex2f((i*20)+20,(i*20)+20);
    glVertex2f((i*20)+20,i*20);
    glEnd();
  }
  glutSwapBuffers();
}


//Инициализация glut

void Drawer::Init(int argc,char **argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize(W,H);
  glutInitWindowPosition(200,200);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glOrtho(0,800,600,0,-1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glutCreateWindow("Tile++");
  glutDisplayFunc(Display);
  glutMainLoop();
}

