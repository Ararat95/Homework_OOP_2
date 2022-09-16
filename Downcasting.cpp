#include <iostream>

class Base
{
public:
    virtual void foo () {std::cout << "Base::foo\n";}
};
class Derived : public Base
{
public:
    void foo () {std::cout << "Derived::foo\n";}
};

int main ()
{
    Derived* ob = (Derived*)(new Base);
    ob->foo();
    delete ob;
}