#include <cassert>
#include <iostream>
#include "mathlib/add.h"

int main() {
    // 测试 add 函数
    assert(mathlib::add(1, 2) == 3);
    assert(mathlib::add(-1, 1) == 0);
    assert(mathlib::add(0, 0) == 0);
    assert(mathlib::add(100, 200) == 300);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
