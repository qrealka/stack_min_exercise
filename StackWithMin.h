#pragma once
#include <stack>

class StackWithMin final   // NOLINT
{
public:
    StackWithMin() = default;
    StackWithMin(const StackWithMin&) = delete;
    StackWithMin& operator=(const StackWithMin&) = delete;

    void push(int value);
    void pop();

    int top() const;
    int min() const;

    bool isEmpty() const;
private:

    struct item final {
        int value;
        int min_value;
    };

    item make_item(int value);

    std::stack<item> m_stack;
};

