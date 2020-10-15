//
// Created by kprlns on 15.10.2020.
//

#ifndef LESSON_TESTCLASS_HPP
#define LESSON_TESTCLASS_HPP

class TestClass {
public:
    int sign(int number) {
        if(number == 0) {
            return 0;
        } else if(number < 0) {
            return -1;
        } else {
            return 1;
        }
    }
};

#endif //LESSON_TESTCLASS_HPP
