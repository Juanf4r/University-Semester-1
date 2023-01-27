// Biblioteca.cpp 
//Juan Fernando Aispuro
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>

int main()
{
    std::string AutordelLibro[3];
    std::string AnodelLibro[3];
    std::string TitulodelLibro[3];

    std::cout << "\tBienvenido a su Biblioteca Digital\n" << "Por favor eliga lo que va a guardar:\n";
  
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\nIngresa el titulo del libro " << i + 1 << ": ";
        std::getline(std::cin, TitulodelLibro[i]); std::cout << std::endl;

        std::cout << "Ingresa la fecha de publicacion del libro: " << i + 1 << ": ";
        std::getline(std::cin, AnodelLibro[i]); std::cout<< std::endl;

        std::cout << "Ingresa el nombre del autor del libro: " << i + 1 << ": ";
        std::getline(std::cin, AutordelLibro[i]); std::cout << std::endl;

    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << std::endl << "LIBRO N." << i + 1; std::cout << "\n\n";

        std::cout << "El autor del libro " << i + 1 << " es: " << TitulodelLibro[i] << std::endl;

        std::cout << "El ano de publicacion del libro " << i + 1 << " es: " << AnodelLibro[i] << std::endl;

        std::cout << "El autor del libro " << i + 1 << " es: " << AutordelLibro[i] << std::endl;
    }
    std::cout << "\n";
    system("pause");
    return 0;
}

