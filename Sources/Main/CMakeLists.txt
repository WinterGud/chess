cmake_minimum_required(VERSION 3.6)

# Set the project name
project(Main)

# Create a sources variable with a link to all cpp files to compile
file(GLOB CPP_SOURCES "src/*.cpp")
file(GLOB CPP_MAIN "*.cpp")
file(GLOB HPP_SOURCES "src/*.hpp")

include_directories("${PROJECT_SOURCE_DIR}/src")

# Add the executable target
add_executable(${PROJECT_NAME} ${HPP_SOURCES} ${CPP_SOURCES} ${CPP_MAIN})