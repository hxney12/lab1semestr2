cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME res1111)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXXSTANDART_REQUIRED TRUE)

add_executable("${PROJECT_NAME}" res1.cpp)
