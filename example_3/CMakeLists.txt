cmake_minimum_required(VERSION 3.0)
project(example_3)

##########################################
# Create a library
##########################################
set(EXECUTABLE_NAME run_example_3)
set(LIBRARY_OUTPUT_NAME example_3)


##########################################
# include headers and sources
##########################################
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

file(GLOB SOURCES src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)


##########################################
# linking to library
##########################################
add_library(${LIBRARY_OUTPUT_NAME} STATIC ${SOURCES})


##########################################
# linking to executable object
##########################################
add_executable(${EXECUTABLE_NAME} ${SOURCES})


