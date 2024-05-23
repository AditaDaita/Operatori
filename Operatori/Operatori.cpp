// Operatori.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int var1, var2, suma;
    std::cout << "Scrieti de la tastatura nr. variabilele suma: " << std::endl;
    std::cin >> var1;
    std::cin >> var2;
    suma = var1 + var2;
    std::cout << "Suma este: " << suma << std::endl;

    int var3, var4, scaderea;
    std::cout << "Scrieti de la tastatura nr. variabilele scadere: " << std::endl;
    std::cin >> var1;
    std::cin >> var2;
    scaderea = var1 - var2;
    std::cout << "Scaderea este: " << scaderea << std::endl;

    int var5, var6, inmultirea;
    std::cout << "Scrieti de la tastatura nr. variabilele inmultire: " << std::endl;
    std::cin >> var1;
    std::cin >> var2;
    inmultirea = var1 * var2;
    std::cout << "Inmultirea este: " << inmultirea << std::endl;

    int var7, var8, impartirea;
    std::cout << "Scrieti de la tastatura nr. variabilele impartirea: " << std::endl;
    std::cin >> var1;
    std::cin >> var2;
    impartirea = var1 / var2;
    std::cout << "Impartirea este: " << impartirea << std::endl;

    int var9, var10, modulo;
    std::cout << "Scrieti de la tastatura nr. variabilele modulo: " << std::endl;
    std::cin >> var1;
    std::cin >> var2;
    modulo = var1 % var2;
    std::cout << "Modulo este: " << modulo << std::endl;
}
 
