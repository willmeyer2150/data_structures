cmake_minimum_required(VERSION 3.20)
project(data_structures LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(data_structures
        src/main.cpp
)

target_include_directories(data_structures PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)