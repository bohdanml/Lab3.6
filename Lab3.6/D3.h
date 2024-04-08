#pragma once

#include "B3.h"
#include "D2.h"
#include <iostream>

class D3 : public D2, private B3 {
    int d3;

public:
    D3(int x, int y, int z, int i, int j, int k)
        : D2(y, i, j), B3(z)
    {
        d3 = x;
    }

    ~D3() {}

    void show_D3();
};
