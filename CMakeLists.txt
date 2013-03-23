cmake_minimum_required(VERSION 2.8)

project(tilecpp)

find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIR})

find_package(GLUT REQUIRED)
if(NOT GLUT_FOUND)
  message("glut not found!")
  return()
else()
  include_directories(${GLUT_INCLUDE_DIR})
endif()

include_directories(${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS})

set(SOURCE_LIB drawer.cpp)

add_library(drawer STATIC ${SOURCE_LIB})

set(SOURCE_LIB game.cpp)

add_library(game STATIC ${SOURCE_LIB})

add_executable(tilecpp main.cpp)

target_link_libraries(tilecpp
                      drawer
                      game
		      ${OPENGL_LIBRARIES}
		      ${GLUT_LIBRARY})

install(TARGETS tilecpp RUNTIME DESTINATION bin)
