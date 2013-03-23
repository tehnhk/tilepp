cmake_minimum_required(VERSION 2.8)

project(tilecpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS})

set(SOURCE_LIB drawer.cpp)

add_library(drawer STATIC ${SOURCE_LIB})

add_executable(tilecpp main.cpp)

target_link_libraries(tilecpp drawer ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

install(TARGETS tilecpp RUNTIME DESTINATION bin)
