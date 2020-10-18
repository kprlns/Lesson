Add this flags to generate lcov input info
```
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage -fprofile-arcs -ftest-coverage")
```
Generate lcov report
```
lcov --directory ../cmake-build-debug/test/CMakeFiles/MyTest.dir/ --base-directory ../cmake-build-debug/test/CMakeFiles/MyTest.dir/ -rc lcov_branch_coverage=1 --capture -o report.info
```

Remove external code from report
```
lcov --remove report.info '/usr/include/*' '10.2.0/*' '/home/kprlns/Desktop/DA_Labs/Lesson/test/*' -o cleaned.info
```
Generate HTML report
```
genhtml --branch-coverage cleaned.info -o out
```

Clean gcov files
```
rm ../cmake-build-debug/test/CMakeFiles/MyTest.dir/*.gcda 
rm ../cmake-build-debug/test/CMakeFiles/MyTest.dir/*.gcno
```

