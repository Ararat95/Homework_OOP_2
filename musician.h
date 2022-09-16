#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <iostream>


class Musician
{
public:
    virtual void play () = 0;
    virtual void listen () = 0;
    virtual bool isPlaying () = 0;
    virtual ~Musician (){};
};

class Saxaphonist : public Musician
{
public:
    void play () override;
    void listen () override;
    bool isPlaying () override {return true;};
    ~Saxaphonist (){};
};

class Pianist : public Musician
{
public:
    void play () override;
    void listen () override;
    bool isPlaying () override {return true;}
    ~Pianist (){};
};

class Bassist : public Musician
{
public:
    void play () override;
    void listen () override;
    bool isPlaying () override {return true;}
    ~Bassist (){};
};

class Drummer : public Musician
{
public:
    void play () override;
    void listen () override;
    bool isPlaying () override {return true;}
    ~Drummer (){};
};


#endif // MUSICIAN_H