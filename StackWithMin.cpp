#include "StackWithMin.h"
#include <algorithm>
#include <type_traits>

static_assert(std::is_default_constructible<StackWithMin>::value == true, "StackWithMin should have default construcor");
static_assert(std::is_copy_constructible<StackWithMin>::value == false, "StackWithMin has to be noncopyable");
static_assert(std::is_copy_assignable<StackWithMin>::value == false, "StackWithMin has to be noncopyable");
static_assert(std::is_move_constructible<StackWithMin>::value == false, "StackWithMin has to be nonmoveable");
static_assert(std::is_move_assignable<StackWithMin>::value == false, "StackWithMin has to be nonmoveable");


StackWithMin::item StackWithMin::make_item(int value) {
    if (m_stack.empty()) {
        return {value, value};
    }
    return {value, (std::min)(value, m_stack.top().min_value)};
}

void StackWithMin::push(int value) {
    m_stack.push(make_item(value));
}

void StackWithMin::pop() {
    m_stack.pop();
}

int StackWithMin::top() const {
    return m_stack.top().value;
}

int StackWithMin::min() const {
    return m_stack.top().min_value;
}

bool StackWithMin::isEmpty() const {
    return m_stack.empty();
}



