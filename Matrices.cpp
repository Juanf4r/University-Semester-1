// Matrices.cpp : 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    int numeros[100][100], filas, columnas;
    std::cout << "--------------------------Matrices--------------------------\n";
    //Numero de filas y columnas
    std::cout << "Digite el numero de filas: "; std::cin >> filas;
    std::cout << "Digite el numero de columnas: "; std::cin >> columnas;

   //Rellenar Matrices
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            numeros[i][j] = 1 + rand() % (9 + 1 - 1);
        }
    }
    std::cout << "\n--------------------Rellenando Matrices---------------------\n";
    std::cout << "\nCARGANDO"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << ".\n"; Sleep(500);
    //Mostrar Matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << numeros[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    system("pause");
    return 0;
}


