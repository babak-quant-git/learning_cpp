cmake_minimum_required(VERSION 3.20)
project(FinancialSingularity CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hft_engine src/main.cpp)

target_compile_options(hft_engine PRIVATE
    -Wall
    -Wextra
    -Werror
    -Wpedantic
    -Wconversion
    -Wshadow
    -O3
)