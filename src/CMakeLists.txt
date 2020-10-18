set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES} ./main.cpp TestClass.hpp Vector.hpp)



add_executable(${BINARY}_run ${SOURCES})

add_test(NAME ${BINARY}_run COMMAND ${BINARY}_run)


add_library(${BINARY}_lib STATIC ${SOURCES} )