// Pokemon_Basico.cpp 
#include<stdlib.h>
#include<iostream>
#include<windows.h>
#include<time.h>

int main()
{
    int pokemon;
    bool pelea_1 = 0;
    int opc_1;
    int pocion = 20;
    int opc1_psmax = 45, opc2_psmax = 44, opc3_psmax = 39;
    int opc1_ps = 45, opc1_at = 49, opc1_def = 49, opc1_vel = 45, opc1_at_esp = 65, opc1_def_esp = 65;
    int opc2_ps = 44, opc2_at = 48, opc2_def = 65, opc2_vel = 43, opc2_at_esp = 50, opc2_def_esp = 64;
    int opc3_ps = 39, opc3_at = 52, opc3_def = 43, opc3_vel = 65, opc3_at_esp = 60, opc3_def_esp = 50;

    std::cout << "--------------------------------BIENVENIDO AL MUNDO POKEMON------------------------------------\n\n";
    std::cout << "Para comenzar tu aventura elige uno de los pokemons iniciales :D \n\n";

    std::cout << "1.-Bulbasaur\n";
    std::cout << "2.-Squirtle\n";
    std::cout << "3.-Charmander\n\n";
    std::cout << "Tu eleccion es: "; std::cin >> pokemon; std::cout << "\n";

    switch (pokemon)
    {
    case 1: std::cout << "----------Tu eleccion es Bulbasaur!--------------" << std::endl
        << "----------------Tipo Planta----------------------" << std::endl
        << "-----------------Vida: 45------------------------" << std::endl
        << "----------------Ataque: 49-----------------------" << std::endl
        << "---------------Defensa: 49-----------------------" << std::endl;

        std::cout << "Te gustaria buscar batalla?\n\n";
        std::cout << "Ingresa 1 para buscar, 0 para rechazar: \n\n"; std::cin >> pelea_1;

        if (pelea_1 == 1)
        {
            std::cout << "Buscando rival.....\n" << std::endl; Sleep(2000);
            std::cout << "Rival encontrado!\n" << std::endl; Sleep(1000);
            std::cout << "COMIENZA EL COMBATE\n" << std::endl; Sleep(500);
            std::cout << "Tu rival saca a Squirtle!" << std::endl; Sleep(200);
            std::cout << "Decides sacar a Bulbasaur!" << std::endl; Sleep(200);
            std::cout << "Que decides hacer?\n\n";

            while(opc1_ps >= 0 && opc2_ps >= 0)
            {
                std::cout << "1.-Atacar\n";
                std::cout << "2.-Pocion\n";
                std::cout << "3.-Huir\n";
                std::cout << "Tu eleccion es: "; std::cin >> opc_1; std::cout << "\n"; Sleep(2000);
                switch (opc_1)
                {
                case 1:

                    std::cout << "Bulbasaur ha atacado a Squirtle!\n"; Sleep(500);
                    std::cout << "Es super eficaz!" << std::endl;
                    opc2_ps -= 8 + rand() % (10);
                    std::cout << "Vida de Squirtle: " << opc2_ps << std::endl; Sleep(1000);
                    std::cout << "Squirtle ha usado burbuja!\n"; Sleep(500);
                    std::cout << "No es eficaz..." << std::endl;
                    opc1_ps -= 2 + rand() % (6);
                    std::cout << "Vida de Bulbasaur: " << opc1_ps << std::endl << std::endl; Sleep(1000);
                    break;

                case 2:
                    std::cout << "Le lanzas una pocion a Bulbasaur!\n"; Sleep(500);
                    std::cout << "Bulbasaur ha recuperdado 20 de vida\n";
                    if(opc1_psmax - opc1_ps > pocion)
                    {
                        opc1_ps += pocion;
                    }
                    if(opc1_psmax - opc1_ps < pocion) 
                    {
                        opc1_ps = opc1_psmax;
                    }
                    std::cout << "Vida de Bulbasaur: " << opc1_ps << std::endl << std::endl; Sleep(1000);
                    break;

                case 3:

                    std::cout << "No se puede huir de un combate!\n" << std::endl;
                    break;

                default:

                    std::cout << "No seleccionaste ninguna de las opciones\n" << std::endl;
                    break;
                }
            }
            if(opc1_ps <= 0) 
            {
                std::cout << "Haz perdido el combate, suerte para la proxima :c\n\n" << std::endl;
            }
            else
            {
                std::cout << "Has ganado el combate!, felicidades! :D\n\n" << std::endl;
            }
            break;
        }
        else
        {
            std::cout << "No se hizo nada, :P\n" << std::endl;
        }
        break;

    case 2: std::cout << "----------Tu eleccion es Squirtle!--------------" << std::endl
        << "----------------Tipo Agua-----------------------" << std::endl
        << "-----------------Vida: 44-----------------------" << std::endl
        << "----------------Ataque: 48----------------------" << std::endl
        << "---------------Defensa: 65----------------------" << std::endl;
        std::cout << "Te gustaria buscar batalla?\n\n";
        std::cout << "Ingresa 1 para buscar, 0 para rechazar: \n\n"; std::cin >> pelea_1;

        if(pelea_1 == 1){
            std::cout << "Buscando rival.....\n" << std::endl; Sleep(2000);
            std::cout << "Rival encontrado!\n" << std::endl; Sleep(1000);
            std::cout << "COMIENZA EL COMBATE\n" << std::endl; Sleep(500);
            std::cout << "Tu rival saca a Charmander!" << std::endl; Sleep(200);
            std::cout << "Decides sacar a Squirtle!" << std::endl; Sleep(200);
            std::cout << "Que decides hacer?\n\n";

            while (opc2_ps >= 0 && opc3_ps >= 0)
            {
                std::cout << "1.-Atacar\n";
                std::cout << "2.-Pocion\n";
                std::cout << "3.-Huir\n";
                std::cout << "Tu eleccion es: "; std::cin >> opc_1; std::cout << "\n"; Sleep(2000);
                switch (opc_1)
                {
                case 1:

                    std::cout << "Squirtle ha usado burbuja!\n"; Sleep(500);
                    std::cout << "Es super eficaz!" << std::endl;
                    opc3_ps -= 8 + rand() % (10);
                    std::cout << "Vida de Charmander: " << opc3_ps << std::endl; Sleep(1000);
                    std::cout << "Charmander ha usado Ascuas!\n"; Sleep(500);
                    std::cout << "No es eficaz..." << std::endl;
                    opc2_ps -= 2 + rand() % (6);
                    std::cout << "Vida de Squirtle: " << opc2_ps << std::endl << std::endl; Sleep(1000);
                    break;

                case 2:
                    std::cout << "Le lanzas una pocion a Squirtle!\n"; Sleep(500);
                    std::cout << "Squirtle ha recuperdado 20 de vida\n";
                    if (opc2_psmax - opc2_ps > pocion) 
                    {
                        opc2_ps += pocion;
                    }
                    if (opc2_psmax - opc2_ps < pocion) 
                    {
                        opc2_ps = opc2_psmax;
                    }
                    std::cout << "Vida de Squirtle: " << opc2_ps << std::endl << std::endl; Sleep(1000);
                    std::cout << "Charmander ha usado Ascuas!\n"; Sleep(500);
                    std::cout << "No es eficaz..." << std::endl;
                    opc2_ps -= 2 + rand() % (6);
                    std::cout << "Vida de Squirtle: " << opc2_ps << std::endl << std::endl; Sleep(1000);
                    break;

                case 3:

                    std::cout << "No se puede huir de un combate!\n" << std::endl;
                    break;

                default:

                    std::cout << "No seleccionaste ninguna de las opciones\n" << std::endl;
                    break;
                }
            }
            if(opc2_ps <= 0)
            {
                std::cout << "Haz perdido el combate, suerte para la proxima :c\n\n" << std::endl;
            }
            else 
            {
                std::cout << "Has ganado el combate!, felicidades! :D\n\n" << std::endl;
            }
            break;
        }
        else 
        {
            std::cout << "No se hizo nada, :P\n" << std::endl;
        }
        break;
        break;

    case 3: std::cout << "----------Tu eleccion es Charmander!-------------" << std::endl
        << "----------------Tipo Fuego-----------------------" << std::endl
        << "-----------------Vida: 39------------------------" << std::endl
        << "----------------Ataque: 52-----------------------" << std::endl
        << "---------------Defensa: 43-----------------------" << std::endl;
        std::cout << "Te gustaria buscar batalla?\n\n";
        std::cout << "Ingresa 1 para buscar, 0 para rechazar: \n\n"; std::cin >> pelea_1;

        if (pelea_1 == 1)
        {
            std::cout << "Buscando rival.....\n" << std::endl; Sleep(2000);
            std::cout << "Rival encontrado!\n" << std::endl; Sleep(1000);
            std::cout << "COMIENZA EL COMBATE\n" << std::endl; Sleep(500);
            std::cout << "Tu rival saca a Bulbasaur!" << std::endl; Sleep(200);
            std::cout << "Decides sacar a Charmander!" << std::endl; Sleep(200);
            std::cout << "Que decides hacer?\n\n";

            while(opc3_ps >= 0 && opc1_ps >= 0) 
            {
                std::cout << "1.-Atacar\n";
                std::cout << "2.-Pocion\n";
                std::cout << "3.-Huir\n";
                std::cout << "Tu eleccion es: "; std::cin >> opc_1; std::cout << "\n"; Sleep(2000);
                switch (opc_1)
                {
                case 1:
                    std::cout << "Charmander ha atacado a Bulbasaur!\n"; Sleep(500);
                    std::cout << "Es super eficaz!" << std::endl;
                    opc1_ps -= 8 + rand() % (10);
                    std::cout << "Vida de Bulbasaur: " << opc1_ps << std::endl; Sleep(1000);
                    std::cout << "Bulbasaur ha usado Latigazo Cepa!\n"; Sleep(500);
                    std::cout << "No es eficaz..." << std::endl;
                    opc3_ps -= 2 + rand() % (6);
                    std::cout << "Vida de Charmander: " << opc3_ps << std::endl << std::endl; Sleep(1000);
                    break;

                case 2:
                    std::cout << "Le lanzas una pocion a Charmander!\n"; Sleep(500);
                    std::cout << "Charmander ha recuperdado 20 de vida\n";
                    if (opc3_psmax - opc3_ps > pocion)
                    {
                        opc3_ps += pocion;
                    }
                    if(opc3_psmax - opc3_ps < pocion)
                    {
                        opc3_ps = opc3_psmax;
                    }
                    std::cout << "Vida de Charmander: " << opc3_ps << std::endl << std::endl; Sleep(1000);
                    break;

                case 3:

                    std::cout << "No se puede huir de un combate!\n\n";
                    break;

                default:

                    std::cout << "No seleccionaste ninguna de las opciones\n\n";

                    break;
                }
            }
            if (opc3_ps <= 0)
            {
                std::cout << "Haz perdido el combate, suerte para la proxima :c\n\n" << std::endl;
            }
            else 
            {
                std::cout << "Has ganado el combate!, felicidades! :D\n\n" << std::endl;
            }
            break;
        }
        else 
        {
            std::cout << "No se hizo nada, :P\n" << std::endl;
        }
        break;
        break;

    default: std::cout << "ERROR AL ELEGIR POKEMON...\n"; break;
    }
    system("pause");
    return 0;
}