cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
                                    # Если версия установленой программы
                                    # старее указаной, произайдёт аварийный выход.

project(drawer)				# Название проекта

set(SOURCE_LIB drawer.cpp)		# Установка переменной со списком исходников

add_library(drawer STATIC ${SOURCE_LIB})# Создание статической библиотеки
