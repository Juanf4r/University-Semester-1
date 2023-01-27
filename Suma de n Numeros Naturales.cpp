// Suma de n Numeros Naturales.cpp 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>
#include <Windows.h>

int sumar(int);

int main()
{
    int nElementos;

    do 
    { 
        std::cout << "[----------------------------BIENVENIDO A SU PROGRAMA DE SUMA!----------------------------]\n\n";
        std::cout << "Digite el numero de elementos a sumar: "; std::cin >> nElementos;
    }
    while(nElementos <= 0);

    std::cout << "\nCalculando resultado"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
    std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << ".\n\n"; Sleep(500);

    std::cout << "La suma es: " << sumar(nElementos) << "\n\n";

    system("pause");
    return 0;
}

int sumar(int n)
{
    int suma = 0;

    if (n == 1)
    {
        suma = 1;
    }
    else
    {
        suma = n + sumar(n - 1);
    }
    return suma;
}