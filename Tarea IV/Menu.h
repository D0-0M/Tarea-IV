#pragma once
#include "Shape.h"
#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Canva.h"
#include "EquiTriangle.h"
#include "EmptySquare.h"

class Menu :public Shape
{

public:
    void PrintMenu() 
    {
        std::cout << "Programa para imprimir figuras" << std::endl;
        std::cout << "por favor elija un numero valido " << std::endl;
        std::cout << "las opciones son " << std::endl;
        std::cout << "1 = Cuadrado" << std::endl; std::cout << "2 = Triangulo" << std::endl; std::cout << "3 = rectangulo" << std::endl;
        std::cout << "4 = Triangulo Equilatero" << std::endl; std::cout << "5 = Cuadrado Vacio" << std::endl;
    }
	void ExecMenu()
    {
        Shape* s = nullptr;
        Canva c;
        int option = 0;
       
        std::cout << "Que quieres imprimir?" << std::endl;
        std::cin >> option;
        if (option == 1)
            s = new Square();
        else if (option == 2)
            s = new Triangle();
        else if (option == 3)
            s = new Rectangle();
        else if (option == 4)
            s = new EquiTriangle();
        else if (option == 5)
            s = new EmptySquare();

        if (s != nullptr)
        {
            c.printShape(s);
            delete s;
        }
        if (option >= 6)
            std::cout << "opcion invalida, intentelo de nuevo" << std::endl;


        
       
	}
};