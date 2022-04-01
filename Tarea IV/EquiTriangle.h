#pragma once
#include "Shape.h"
#include <iostream>
class EquiTriangle :public Shape
{
public:
    void draw() {
        for (int i = 0; i < 5; i++)
        {
            for (int k = 4; k > i; k--)
            {
                std::cout << " ";

            }
            

            for (int j = 0; j < i; j++)
            {
                std::cout << "*";
                
            }
            std::cout << "*";
            for (int j = 0; j < i; j++)
            {
                std::cout << "*";

            }
            
            std::cout << "" << std::endl;
        }
    }
};