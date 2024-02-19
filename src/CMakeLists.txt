add_library(adder SHARED adder.cpp)
target_include_directories(adder PUBLIC ${PROJECT_SOURCE_DIR}/include)
