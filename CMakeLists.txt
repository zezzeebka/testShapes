cmake_minimum_required(VERSION 3.5)

project(testShapes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SFML_DIR SFML-2.5.1/lib/cmake/SFML)

find_package(SFML COMPONENTS graphics audio window system network REQUIRED)

include_directories(SFML-2.5.1/include)

file(GLOB_RECURSE PROJECT_SOURCE src/*.cpp src/*.h)

add_executable(testShapes ${PROJECT_SOURCE})

target_link_libraries(testShapes sfml-graphics sfml-system sfml-window sfml-audio sfml-network)

