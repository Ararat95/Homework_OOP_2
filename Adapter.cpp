#include <iostream>

class Target
{
public:
    virtual int foo () = 0;
};
class Adaptee_interface 
{
public:
    virtual int moo () = 0;
};
class Adaptee : public Adaptee_interface
{
public:
    int moo () {return 1;}
};
class Adapter : public Target
{
public:
    int foo () {return 2;}
private:
    Adaptee_interface* adaptee;
public:
    void connect (Adaptee_interface* src)
    {
        adaptee = src;
    }
};
class Client 
{
private:
    Target* trg;
public:
    void connect (Target* src)
    {
        trg = src;
    }
    void get ()
    {
        if (trg->foo() > 1)
        {
            std::cout << "connected\n";
        }
        else 
        {
            std::cout << "error\n";
        }
    }
};

int main ()
{
    Adapter* t_ptr = new Adapter;
    Adaptee* a_ptr = new Adaptee;
    Client* c_ptr = new Client;

    t_ptr->connect(a_ptr);
    c_ptr->connect(t_ptr);

    c_ptr->get();
}