cmake_minimum_required(VERSION 3.20)
project(FinancialSingularity LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(hft_engine src/main.cpp)
add_executable(types_and_addresses exercises/types_and_addresses.cpp)

target_compile_options(hft_engine PRIVATE
  -Wall
  -Wextra
  -Werror
  -Wpedantic
  -Wconversion
  -Wshadow
)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  target_compile_options(hft_engine PRIVATE -O0 -g)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
  target_compile_options(hft_engine PRIVATE -O3 -DNDEBUG)
endif()