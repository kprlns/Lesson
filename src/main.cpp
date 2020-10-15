#include <iostream>

#include "TestClass.hpp"


int main() {
    std::cout << "Hello, World!" << std::endl;
    TestClass().sign(0);
    TestClass().sign(-1);
    TestClass().sign(1);
    return 0;
}
