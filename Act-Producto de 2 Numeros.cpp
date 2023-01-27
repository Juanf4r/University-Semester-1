// Act-Producto de 2 Numeros.cpp 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>
#include <windows.h>

int producto(int, int);

int main()
{
    int n1, n2, p;
    std::cout << "[--------------------------BIENVENIDO A SU PROGRAMA DE MULTIPLICACION!--------------------------]\n\n";
    std::cout << "Ingrese el valor del Primer Producto: "; std::cin >> n1; std::cout << "\n";
    std::cout << "Ingrese el valor del Segundo Producto: "; std::cin >> n2; std::cout << "\n";

    std::cout << "Calculando resultado"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
    std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << ".\n\n"; Sleep(500);

    p = producto(n1, n2);

    std::cout << "El resultado es: " << p <<"\n\n";

    system("pause");
    return 0;
}

int producto(int a, int b)
{
    if (a == 0 or b == 0)
    {
        return 0;
    }
    else
    {
        return a + producto(a, b - 1);
    }
}

