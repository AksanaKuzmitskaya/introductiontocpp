#include "stack.h"
#include <iostream>

int main()
{
    Stack<int> a, b;
    a.push(1);
    a.push(2);
    b.push(3);
    b.push(4);
    Stack<int> c = a + b;
    
    int &top = c.top();
    std::cout << top << endl;
}
