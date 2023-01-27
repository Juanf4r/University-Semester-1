// Maximo Comun Divisor.cpp 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int a, b, aux;
    std::cout << "---------------------BIENVENIDO AL MAXIMO COMUN DIVISOR!---------------------\n\n";
    std::cout << "Digite el primer numero a comparar: "; std::cin >> a; std::cout << "\n";
    std::cout << "Digite el segundo numero a comparar: "; std::cin >> b; std::cout << "\n";
    std::cout << "\n";

    std::cout << "Calculando"; std::cout << "."; Sleep(500); 
    std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); 
    std::cout << ".\n\n"; Sleep(500);

    bool MCD = false;

    if (a > 0 && b > 0 && a!= b) 
    {
        if (a > b) 
        {
            aux = a;
            a = b;
            b = aux;
        }

        int i = a;

        while (!MCD && i >= 1)
        {
            if (a % i == 0 && b % i == 0) 
            {
                std::cout << "El MCD es " << i << "\n";
                MCD = true;
            }
            else 
            {
                i--;
            }
        }
    }

    else
    {
        if (a == b) 
        {
            std::cout << "ERROR: INGRESASTE 2 NUMEROS IGUALES. " << "\n";
        }
        else 
        {
            std::cout<< "ERROR: INGRESASTE NUMEROS NEGATIVOS. " << "\n";
        }
    }

    system("pause");
    return 0;
}


