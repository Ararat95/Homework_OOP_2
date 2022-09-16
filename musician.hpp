#include "musician.h"

void Saxaphonist::play ()
{
    if (isPlaying()) 
    {
        std::cout << "Sax::Play\n"; 
        listen();
    }
}
void Bassist::play ()
{
    if (isPlaying()) 
    {
        std::cout << "Bass::Play\n"; 
        listen();
    }
}
void Pianist::play ()
{
    if (isPlaying()) 
    {
        std::cout << "Piano::Play\n"; 
        listen();
    }
}
void Drummer::play ()
{
    if (isPlaying()) 
    {
        std::cout << "Drum::Play\n"; 
        listen();
    }
}
void Saxaphonist::listen ()
{
    std::cout << "Sax::listen\n";
}
void Bassist::listen ()
{
    std::cout << "Bass::listen\n";
}
void Pianist::listen ()
{
    std::cout << "Piano::listen\n";
}
void Drummer::listen ()
{
    std::cout << "Drum::listen\n";
}