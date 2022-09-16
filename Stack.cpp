#include <iostream>
class Stack
{
public:
    Stack() { top = -1; } //constructor
    void push(int var) { st[++top] = var; } // put number on stack
    int pop() { return st[top--]; } // take number off stack
protected:
    enum { MAX = 3 }; // size of stack array
    int st[MAX]; // stack: array of integers
    int top; // index to top of stack
};
class NewStack : public Stack
{
public:
    void push (int var);
    int pop ();
};
void NewStack::push (int var)
{
    if ((top + 1) == MAX) 
    {
        std::cout << "Warning: you dont have enough space in your Stack\n"; 
        return ;
    }
    Stack::push(var);
}
int NewStack::pop ()
{
    if ((top - 1) < -1)
    {
        std::cout << "Warning: your Stack is empty, we unable to pop any items\n";
        return -1;
    }
    return Stack::pop ();
}

int main ()
{
    NewStack ob;
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    ob.push(6);
    std::cout << ob.pop() << std::endl;
    std::cout << ob.pop() << std::endl;
    std::cout << ob.pop() << std::endl;
    std::cout << ob.pop() << std::endl;

    return 0;
}