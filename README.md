# cmake-dll-dirs

Minimal example of CMake Windows [TARGET_RUNTIME_DLL_DIRS](https://cmake.org/cmake/help/latest/manual/cmake-generator-expressions.7.html).

This test is intended for Windows.

Similar technique can be used for other platforms say `DYLD_LIBRARY_PATH` for macOS and `LIBRARY_PATH` for Linux using
[TARGET_FILE_DIR](https://cmake.org/cmake/help/latest/manual/cmake-generator-expressions.7.html#genex:TARGET_FILE_DIR).


```sh
cmake -Bbuild

cmake --build build

ctest --test-dir build
```

if the `set_property(TEST ... ENVIRONMENT_MODIFICATION ...)` is not used, the test will fail on Windows with Error Code 0x0000135.
