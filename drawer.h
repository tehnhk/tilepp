/*
Класс рисовальщика. Хедер.
*/

//Подключаем glut

#include <GL/glut.h>
#include <GL/glu.h>

#ifndef DRAWER_H
#define DRAWER_H

class Drawer
{
public:
  void Init(int argc,char **argv);
  void SetGrid(bool grd);
};

#endif // DRAWER_H
