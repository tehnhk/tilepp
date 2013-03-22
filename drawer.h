/*
Класс рисовальщика. Хедер.
*/

//Основные константы класса Drawer

#include <GL/glut.h>

const int W = 800; //Ширина экрана
const int H = 600; //Высота экрана
const int TW = 32; //Ширина тайла
const int TH = 32; //Высота тайла

#ifndef DRAWER_H
#define DRAWER_H

class Drawer
{
  void Init();
  void Display();
};

#endif // DRAWER_H
