#include <iostream>

class Final
{
private:
    Final () {};
    friend class My_class;
};
class My_class : virtual public Final
{
public:
    virtual void foo () {std::cout << "my_class::foo " << std::endl;}
};
class My_big_class : public My_class
{
public:
    void foo () override {std::cout << "big_class :: foo " << std::endl;}
};

int main ()
{
    My_class obj;
    obj.foo();

    return 0;
}