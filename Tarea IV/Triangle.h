#pragma once
#include "Shape.h"
#include <iostream>
class Triangle :public Shape
{
public:
    void draw() {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < i; j++)
                std::cout << " * ";
            std::cout << "" << std::endl;
        }
    }
};