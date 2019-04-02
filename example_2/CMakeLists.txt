cmake_minimum_required(VERSION 3.0)
project(hello)

set(EXECUTABLE_NAME hello)
# set(SOURCE_DIR)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

file(GLOB SOURCES *.cpp)

add_library(${EXECUTABLE_NAME} STATIC ${SOURCES})
include_directories(${PROJECT_SOURCE_DIR})

add_executable(${EXECUTABLE_NAME} ${SOURCES})

