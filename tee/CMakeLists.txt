cmake_minimum_required(VERSION 3.5)

project(tee LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
    src/tee.cpp
)

add_executable(tee ${SOURCES})

target_include_directories(tee PRIVATE include)
