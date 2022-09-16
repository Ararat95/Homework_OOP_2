#include <vector>
#include "musician.h"
#include "musician.hpp"

int main()
{
    std::vector<Musician*> vec;
    Saxaphonist ob1;
    Bassist ob2;
    Drummer ob3;
    Pianist ob4;
    vec.push_back(&ob1);
    vec.push_back(&ob4);
    vec.push_back(&ob3);
    vec.push_back(&ob2);

    for (int i = 0; i < 4; ++i)
    {
        vec[i]->play();
    }
}