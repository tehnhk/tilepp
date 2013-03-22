project(tilecpp)

find_package(GLUT)
find_package(OpenGL)

add_executable(tilecpp main.cpp)

install(TARGETS tilecpp RUNTIME DESTINATION bin)
