# Set the minimum version of CMake required to build the project
cmake_minimum_required(VERSION 3.20)

# Set the name of your project
project(weighted_bs VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the executable target and its source files
add_executable(weighted_bs src/main.cpp
	src/algo/naive.cpp
	src/algo/binary_search.cpp
	src/algo/third_search.cpp
)


