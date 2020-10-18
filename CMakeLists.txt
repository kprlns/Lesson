cmake_minimum_required(VERSION 3.17)
project(Lesson)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)
include_directories(test)

add_subdirectory(src)
add_subdirectory(test)


add_executable(Lesson src/main.cpp src/Vector.hpp)
target_link_libraries(Lesson -lgtest)