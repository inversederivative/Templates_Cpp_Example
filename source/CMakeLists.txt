add_executable(Templates_Example
        main.cpp
        Container.cpp
)

set_target_properties(Templates_Example PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)