#ifndef STACK_OPERATIONS_H
#define STACK_OPERATIONS_H

#include <stack>
#include <fstream>
#include <stdexcept>

struct Data {
    int value;
};

class StackOperations {
public:
    static void pushElements(std::stack<Data>& st, const std::string& filename) {
        std::ifstream file(filename);
        int value;
        while (file >> value) {
            Data data;
            data.value = value;
            st.push(data);
        }
        file.close();
    }

    static void popElements(std::stack<Data>& st) {
        int sum = 0;
        while (!st.empty()) {
            sum += st.top().value;
            st.pop();
        }
        if (sum < 0) {
            throw std::runtime_error("Sum of elements in the stack is negative.");
        }
    }
};

#endif 
