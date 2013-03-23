/*
Класс рисовальщика. Хедер.
*/

//Подключаем glut

#include <GL/glut.h>

//Основные константы класса Drawer

const int W = 800; //Ширина экрана
const int H = 600; //Высота экрана
const int TW = 32; //Ширина тайла
const int TH = 32; //Высота тайла

#ifndef DRAWER_H
#define DRAWER_H

class Drawer
{
public:
  void Init(int argc,char **argv);
};

#endif // DRAWER_H
