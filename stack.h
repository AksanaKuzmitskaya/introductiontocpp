/**
 * stack.h
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Using templates, implement a Stack class that can be used to store items of any type
 */

#include <vector>
#include <iostream>
using namespace std;

template<class T> class Stack;

template<class T>
Stack<T> operator+(const Stack<T> &s1, Stack<T> &s2)
{
    Stack<T> s3 = s1;
        
    int sz2 = s2.items.size();
    for (int i = 0; i < sz2; i++)
        s3.push(s2.items[i]);
    
    return s3;   
}

template<class T>
class Stack
{
    friend Stack operator+<>(const Stack<T> &s1, Stack<T> &s2);
    vector<T> items;
    
public:
    bool empty() { return items.empty(); }
    void push(const T &item) { items.push_back(item); }
    T & top() { return items.back(); }
    void pop() { 
    if (!items.empty())
        items.pop_back(); 
    }
};  
