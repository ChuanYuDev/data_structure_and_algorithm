cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(dsaa VERSION 0.1.2)

set(DSAA dsaa)
set(DSAA_PUBLIC_HEADER ${CMAKE_SOURCE_DIR}/include/)

add_subdirectory(tests)