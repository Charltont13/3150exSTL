#include "queue_operations.h"
#include <iostream>
#include <cassert>

int main() {
    std::queue<Data> q;

    QueueOperations::pushElements(q, "input.txt");

    try {
        QueueOperations::popElements(q);
        std::cout << "Sum of the queue elements is non-negative." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
