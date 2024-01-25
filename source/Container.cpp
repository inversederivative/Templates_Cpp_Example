//
// Created by John on 1/25/2024.
//
#include <Container.hpp>

// Explicit instantiation for the types you'll use

// This is necessary, because the definitions are not in the header. So when
//  we link the executable, it doesn't know about the types at compile time.
template class Container<int>;
template class Container<double>;
template class Container<std::string>;

template<typename T>
Container<T>::Container(T value) {
    data = value;
}

template<typename T>
void Container<T>::display() {
    std::cout << "Container contains: " << data << std::endl;
}

template<typename T>
void Container<T>::update(T newValue) {
    data = newValue;
}