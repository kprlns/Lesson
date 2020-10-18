#include <iostream>

#include "Vector.hpp"


int main() {
    Vector<int> vector;
    vector.add(1);
    vector.add(2);
    vector.add(3);

    for (int i = 0; i < vector.getSize(); ++i) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
