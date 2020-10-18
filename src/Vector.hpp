//
// Created by kprlns on 18.10.2020.
//

#ifndef LESSON_VECTOR_HPP
#define LESSON_VECTOR_HPP

#include <cstring>

template<typename T> class Vector {
private:
    int size;
    int capacity;
    T* data;

    int getIncreasedCapacity(int currentCapacity) {
        return (currentCapacity + 1) * 2;
    }

    void resize(int minimumSize) {
        int newCapacity = capacity;
        while (newCapacity < minimumSize) {
            newCapacity = getIncreasedCapacity(newCapacity);
        }
        std::cout << "Increasing size from " << capacity << " to " << newCapacity << std::endl;
        T* tmpData = new T[newCapacity];
        std::memcpy(tmpData, data, sizeof(T) * size);
        capacity = newCapacity;
        delete[] data;
        data = tmpData;
    }

public:


    Vector(): size(0), capacity(0), data(nullptr) {};
    Vector(int capacity) {
        size = 0;
        this->capacity = capacity;
        data = new T[capacity];
    }

    void add(T element) {
        if(size == capacity) {
            resize(size + 1);
        }
        data[size] = element;
        size++;
    }

    void addAll(T* elements, int numberOfElements) {
        if(size + numberOfElements >= capacity) {
            resize(size + numberOfElements);
        }
        for(int i = 0; i < numberOfElements; ++i) {
            add(elements[i]);
        }
    }


    T& operator[](int index) {
        return data[index];
    }

    int getSize() {
        return size;
    }
    int getCapacity() {
        return capacity;
    }
    T *getData() const {
        return data;
    }

    ~Vector() {
        delete[] data;
    }
};



#endif //LESSON_VECTOR_HPP
