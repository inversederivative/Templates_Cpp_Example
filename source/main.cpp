//
// Created by John on 1/25/2024.
//
#include <Container.hpp>

int main() {
    // Create instances of the templated class with different types
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);
    Container<std::string> stringContainer("Hello, C++!");

    // Display the initial content of the containers
    intContainer.display();
    doubleContainer.display();
    stringContainer.display();

    // Update the content of the containers
    intContainer.update(99);
    doubleContainer.update(2.718);
    stringContainer.update("C++ Templates are powerful!");

    // Display the updated content of the containers
    intContainer.display();
    doubleContainer.display();
    stringContainer.display();

    return 0;
}
