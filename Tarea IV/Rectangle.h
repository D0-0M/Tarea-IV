#pragma once
#include "Shape.h"
#include <iostream>
class Rectangle :public Shape
{
public:
    Rectangle() {
        std::cout << "se crea rectangulo" << std::endl;
    }
    ~Rectangle() {
        std::cout << "se destruye rectangulo" << std::endl;
    }
    void draw() {
        for (int i = 0; i < this->lado; i++)
        {
            for (int i = 0; i < this->lado/2; i++)
                std::cout << " * ";
            std::cout << "" << std::endl;

        }
    }
};