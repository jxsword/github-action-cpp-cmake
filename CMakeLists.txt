cmake_minimum_required(VERSION 3.20)
project(mathlib VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 头文件
include_directories(include)

# 库文件
add_library(mathlib
    src/add.cpp
)

# 测试
enable_testing()
add_executable(test_add
    tests/test_add.cpp
)
target_link_libraries(test_add PRIVATE mathlib)

add_test(NAME test_add COMMAND test_add)
