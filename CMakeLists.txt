cmake_minimum_required(VERSION 3.10)
project(TypeInterpret VERSION 1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
enable_testing()

# GoogleTest via FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# Library
add_library(TypeInterpret STATIC src/TypeInterpret.cpp)
target_include_directories(TypeInterpret PUBLIC include)

# Executable
add_executable(TypeApp src/TypeApp.cpp)
target_link_libraries(TypeApp PRIVATE TypeInterpret)

# Tests
add_subdirectory(tests)