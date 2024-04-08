cmake_minimum_required(VERSION 3.6)

# Set the project name
project(Main)

# Create a sources variable with a link to all cpp files to compile
file(GLOB CPP_SOURCES "src/*.cpp")
file(GLOB CPP_MAIN "*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/headers")

# Add the executable target
add_executable(${PROJECT_NAME} ${CPP_SOURCES} ${CPP_MAIN})