set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage -fprofile-arcs -ftest-coverage")

lcov --directory ../cmake-build-debug/test/CMakeFiles/MyTest.dir/ --base-directory ../cmake-build-debug/test/CMakeFiles/MyTest.dir/ -rc lcov_branch_coverage=1 --capture -o report.info
lcov --remove report.info '/usr/include/*' '10.2.0/*' '/home/kprlns/Desktop/DA_Labs/Lesson/test/*' -o cleaned.info
genhtml --branch-coverage cleaned.info -o out