// Act-Potencia.cpp 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>
#include <windows.h>

int potencia(int, int);

int main()
{
    int base, exponente;
    std::cout << "[--------------------------------BIENVENIDO A SU PROGRAMA DE POTENCIAS!--------------------------------]\n";
    std::cout << "\n\nDigite el numero base: "; std::cin >> base;
    std::cout << "\nDigite el exponente del numero base: "; std::cin >> exponente;

    std::cout << "\nCalculando resultado"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
    std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << ".\n\n"; Sleep(500);

    std::cout << "\nPotencia de " << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << "\n\n";

    system("pause");
    return 0;
}

int potencia(int x, int y) 
{
    int pot;

    if (y == 1)
    {
        pot = x;
    }
    else
    {
        pot = x * potencia(x, y - 1);
    }
    return pot;
}