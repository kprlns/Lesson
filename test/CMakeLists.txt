

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${TEST_SOURCES})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage -fprofile-arcs -ftest-coverage -g -O0")

enable_testing()
find_package(GTest REQUIRED)

add_executable(MyTest TestMain.cpp Test.cpp VectorTest.cpp)
gtest_add_tests(TARGET MyTest)

target_link_libraries(MyTest gtest)
