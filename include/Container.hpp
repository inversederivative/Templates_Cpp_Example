//
// Created by John on 1/25/2024.
//
#include <iostream>

#ifndef TEMPLATES_EXAMPLE_CONTAINER_HPP
#define TEMPLATES_EXAMPLE_CONTAINER_HPP

// Template class definition
template <typename T>
class Container {
private:
    // Data member of type T
    T data;

public:
    // Constructor to initialize the data member
    explicit Container(T value);

    // Member function to display the content of the container
    void display();

    // Member function to update the content of the container
    void update(T newValue);
};

#endif //TEMPLATES_EXAMPLE_CONTAINER_HPP
