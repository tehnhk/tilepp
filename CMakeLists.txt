cmake_minimum_required(VERSION 2.8)

project(tile++)

set(EXECUTABLE_NAME "myproject")
add_executable(${EXECUTABLE_NAME} main.cpp)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#See the FindSFML.cmake file for additional details and instructions
find_package(SFML 1.6 REQUIRED system window graphics network audio)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()

install(TARGETS myproject RUNTIME DESTINATION bin)

add_subdirectory(include)