# Templates C++ Example

---

### Introduction

This project is a simple demonstration of how to instantiate tempalates in a cpp file, when the 
definitions are in a header file. The thing to consider here, is that when we have a signature 
in a header file, and the definition in a cpp file, we do not know anything at compile time 
(due to the linker), so we therefore have to explicitly define the types that we'll be using as 
templates.

---

### Building and Execution
 
    mkdir build && cd build
    cmake ..
    make
    cd bin
    ./Templates_Example

---


