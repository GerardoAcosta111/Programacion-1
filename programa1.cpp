#include <iostream>
#include <stdio.h>


int main()
{

    int edad;
    std::cout << "Ingrese Su Edad: ";
    std::cin >> edad;

    if (edad >= 18) {
        std::cout << "Usted es Mayor de Edad" << std::endl;
    }
    else {
        std::cout << "Usted no es Mayor de Edad" << std::endl;
    }

    return 0;
}