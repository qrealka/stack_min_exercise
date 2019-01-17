#include <iostream>
#include "StackWithMin.h"

int main()
{
    StackWithMin s;
    std::cout << "Pushing onto stack...\n";
    int vals[] = {7, 13, 8, 4, 5, 4, 20, 2, 6};
    for (int val : vals) {
        s.push(val);
        std::cout << s.top() << ", " << s.min() << "    ";
    }
    std::cout << "\nPopping off stack...\n";
    while (!s.isEmpty())
    {
        std::cout << s.top() << ", " << s.min() << "    ";
        s.pop();
    }
    std::cout << '\n';
}

