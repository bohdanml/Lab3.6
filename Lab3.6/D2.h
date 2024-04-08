#pragma once

#include "D1.h"
#include <iostream>

class D2 : private D1 {
    int d2;

public:
    D2(int x, int i, int j)
        : D1(x, i, j)
    {
        d2 = x;
    }

    ~D2() {}

    void show_D2();
};