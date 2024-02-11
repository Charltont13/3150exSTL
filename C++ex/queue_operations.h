#ifndef QUEUE_OPERATIONS_H
#define QUEUE_OPERATIONS_H

#include <queue>
#include <fstream>
#include <stdexcept>

struct Data {
    int value;
};

class QueueOperations {
public:
    static void pushElements(std::queue<Data>& q, const std::string& filename) {
        std::ifstream file(filename);
        int value;
        while (file >> value) {
            Data data;
            data.value = value;
            q.push(data);
        }
        file.close();
    }

    static void popElements(std::queue<Data>& q) {
        int sum = 0;
        while (!q.empty()) {
            sum += q.front().value;
            q.pop();
        }
        if (sum < 0) {
            throw std::runtime_error("Sum of elements in the queue is negative.");
        }
    }
};

#endif
