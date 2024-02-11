#include "stack_operations.h"
#include <iostream>
#include <cassert>

int main() {
    std::stack<Data> st;

    StackOperations::pushElements(st, "input.txt");

    try {
        StackOperations::popElements(st);
        std::cout << "Sum of elements in the stack is non-negative." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
