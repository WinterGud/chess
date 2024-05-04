cmake_minimum_required(VERSION 3.6)

# Set C++ standart
set (CMAKE_CXX_STANDARD 26)

# Set the project name
project(Main)

# Create a sources variable with a link to all cpp files to compile
file(GLOB CPP_SOURCES "src/*.cpp")
file(GLOB CPP_MAIN "*.cpp")
file(GLOB HPP_SOURCES "src/*.hpp")
file(GLOB H_SOURCES "src/*.h")
file(GLOB CPP_FIGURES "Figures/*.cpp")
file(GLOB H_FIGURES "Figures/*.H")

include_directories("${PROJECT_SOURCE_DIR}/src")
include_directories("${PROJECT_SOURCE_DIR}/Figures")

# Add the executable target
add_executable(${PROJECT_NAME}
    ${HPP_SOURCES} 
    ${H_SOURCES} 
    ${H_FIGURES} 
    ${CPP_FIGURES}
    ${CPP_SOURCES} 
    ${CPP_MAIN})