#include "StackWithMin.h"
#include <algorithm>
#include <type_traits>


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


static_assert( std::is_default_constructible<StackWithMin>::value, "StackWithMin should have default constructor");
#if defined(_MSC_VER) && _MSC_VER > 1800
static_assert(!std::is_copy_constructible<StackWithMin>::value, "StackWithMin has to be noncopyable");
static_assert(!std::is_copy_assignable<StackWithMin>::value, "StackWithMin has to be noncopyable");
static_assert(!std::is_move_constructible<StackWithMin>::value, "StackWithMin has to be nonmoveable");
static_assert(!std::is_move_assignable<StackWithMin>::value, "StackWithMin has to be nonmoveable");
#endif
