#pragma once
#include <iostream>
using namespace std;
class B1
{
    int b1;

public:
    B1()
        : b1(0)
    { }

    B1(int x)
    {
        b1 = x;
    }

    int getB1() { return b1; };

    ~B1() { };

    void show_B1();
};