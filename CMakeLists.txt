cmake_minimum_required(VERSION 3.10)

project(RayTracer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(src)

add_executable(RayTracer src/main.cc)

add_custom_target(clear
COMMAND bash -c "rm -rf ${CMAKE_CURRENT_BINARY_DIR}/../image.ppm ${CMAKE_CURRENT_BINARY_DIR}/*"
WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)