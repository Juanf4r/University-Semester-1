// Act- Palabras Palindromas.cpp 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>
#include <windows.h>

bool palindromo(char palabra[], int ini, int fin) 
{
    if (ini >= fin) return true;
    if (palabra[ini] == palabra[fin])
        palindromo(palabra, ini + 1, fin - 1);
    else return false;
}

int main(void)
{
    char palabra[50];
    int tam;
    bool pal;

    std::cout << "[---------------------------ACTIVIDAD PALABRAS PALINDROMAS---------------------------]\n\n";
    std::cout << "Ingrese la palabra a comparar: "; std::cin.getline(palabra, 50);
    std::cout << "\nCalculando resultado"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); 
    std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);

    tam = strlen(palabra);
    pal = palindromo(palabra, 0, tam - 1);

    if (pal == true)
    {
        std::cout << "\n\nLa palabra " << palabra << " es palindroma\n\n";
    }
    else 
    {
        std::cout << "\n\nLa palabra " << palabra << " no es palindroma\n\n";
    }
    system("pause");
    return 0;
}