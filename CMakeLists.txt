cmake_minimum_required(VERSION 3.27)

project(dllDirs LANGUAGES CXX)

enable_testing()

# to make the need to put DLL path in PATH
add_subdirectory(src)

add_executable(main app/main.cpp)
target_link_libraries(main PRIVATE adder)

# just to make a complete test
set(test_val 3)
math(EXPR out_val "${test_val} + 1")

add_test(NAME adder COMMAND main ${test_val})

# without this line on Windows, test fails "Exit code 0xc0000135"
set_property(TEST adder PROPERTY ENVIRONMENT_MODIFICATION PATH=path_list_append:$<TARGET_RUNTIME_DLL_DIRS:main>)

# just for completeness
set_property(TEST adder PROPERTY PASS_REGULAR_EXPRESSION "is ${out_val}")

# ignore build directory (general technique)
file(GENERATE OUTPUT .gitignore CONTENT "*")
