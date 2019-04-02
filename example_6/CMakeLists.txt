cmake_minimum_required(VERSION 3.0)
project(example_5)


##########################################
# SET BUILD TYPE
##########################################
set(DEFAULT_BUILD_TYPE "RelWithDebInfo")
# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message("Setting build type to 'RelWithDebInfo' as none was specified.")
  set(CMAKE_BUILD_TYPE ${DEFAULT_BUILD_TYPE} CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
    "MinSizeRel" "RelWithDebInfo")
endif()


##########################################
# Create a library
##########################################
set(EXECUTABLE_NAME run_example_5)
set(LIBRARY_OUTPUT_NAME example_5)

set(CMAKE_BUILD_DIR ${CMAKE_SOURCE_DIR}/build)


set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

##########################################
# include headers and sources
##########################################
file(GLOB SOURCES src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)


##########################################
# linking to library
##########################################
add_library(${LIBRARY_OUTPUT_NAME} SHARED ${SOURCES})
# add_library(${EXECUTABLE_NAME}::library ALIAS ${LIBRARY_OUTPUT_NAME})


    
##########################################
# linking to executable object
##########################################
add_executable(${EXECUTABLE_NAME} ${SOURCES})


##########################################
# installation
##########################################

# Libraries
install(TARGETS ${LIBRARY_OUTPUT_NAME} 
    DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

# Binaries
install(TARGETS ${EXECUTABLE_NAME} 
    DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

# Header files
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include)

# Config
# install (FILES cmake-examples.conf
#     DESTINATION etc)




