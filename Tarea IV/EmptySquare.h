#pragma once
#include "Shape.h"
#include <iostream>
class EmptySquare :public Shape
{
public:
    EmptySquare()
    {
        std::cout << "se crea cuadrado vacio" << std::endl;
    }
    ~EmptySquare()
    {
        std::cout << "se destruye cuadrado vacio" << std::endl;
    }
    void draw()
    {
        for (int i = 0; i < this->lado; i++)
        {
            if (i == 0 || i == 9)
            {
                for (int i = 0; i < this->lado; i++)
                    std::cout << " * ";
                std::cout << "" << std::endl;
            }
            else
            {
                std::cout << " * ";
                for (int i = 0; i < this->lado-2; i++)
                    std::cout << "   ";
                std::cout << " * " << std::endl;
            }

        }
    }
};