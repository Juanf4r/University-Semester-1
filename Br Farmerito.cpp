// Battle Royale Juanfer.cpp 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>

class Jugador {
public:
    std::string nombre = "";
    bool vida = false;
    int ataque = 0;
    int suerte = 0;
    int escudo = 0;
};

int main()
{
    srand(time(0));
    Jugador* Jugadores[16];
    int ataques_randoms[2] = {};
    int contador = 16, indice1, indice2;
    std::string Jugadores_total[16] = { "Tomy","Jorge","Posho","Palomo","Red","Detective","Hatsumi",
    "Dani","Hina","Buddha","Mafer","Mont","Tvchaz","Alex","Paneton","Abram" };


    std::cout << "\tBIENVENIDO AL BATTLE ROYALE FARMERITO! \n"; Sleep(1500);
    std::cout << "\nLos participantes son: \n"; Sleep(1500);

    for (int i = 0; i < 16; i++)
    {
        Jugadores[i] = new Jugador();
        Jugadores[i]->nombre = Jugadores_total[i];
        Jugadores[i]->vida = true;
        Jugadores[i]->escudo = rand() % (50);
        Jugadores[i]->ataque = rand() % (101);
        Jugadores[i]->suerte = rand() % (4);

        std::cout << "Participante N." << i + 1 << ": " << Jugadores_total[i] << "\n"; 
    }

    srand(time(0));

    std::cout << "\nQue empieze la pelea y gane el mejor! ^^"; Sleep(2000);
    std::cout << "\nLos personajes han caido a la arena"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);  Sleep(1000);
    std::cout << "\nLos jugadores estan looteando"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); Sleep(1000);
    do {
        indice1 = rand() % 16;
        indice2 = rand() % 16;

        if (!Jugadores[indice1]->vida)
        {
            do
            {
                indice1 = rand() % 16;

            } while (!Jugadores[indice1]->vida);
        }
        if (!Jugadores[indice2]->vida || indice1 == indice2)
        {
            do
            {
                indice2 = rand() % 16;

            } while (!Jugadores[indice2]->vida || indice1 == indice2);
        }

        std::cout << "\n\nSe han encontrado: " << Jugadores[indice1]->nombre << " y " << Jugadores[indice2]->nombre; Sleep(1000);

        if (Jugadores[indice1]->suerte == Jugadores[indice2]->suerte)
        {
            std::cout << "\nNo paso nada, se dieron la paz del senor :D" << "\n"; Sleep(1000);
        }
        else if (Jugadores[indice1]->escudo > Jugadores[indice2]->escudo)
        {
            std::cout << "\n" << Jugadores[indice1]->nombre << " rompio el escudo de " << Jugadores[indice2]->nombre << "\n"; Sleep(1000);
        }
        else if (Jugadores[indice1]->ataque > Jugadores[indice2]->ataque)
        {
            std::cout << "\n" << Jugadores[indice1]->nombre << " ha acabado con " << Jugadores[indice2]->nombre << "\n"; Sleep(1000);
            Jugadores[indice2]->vida = false;
            contador--;
        }
        else if (Jugadores[indice2]->ataque >= Jugadores[indice1]->ataque)
        {
            std::cout << "\n" << Jugadores[indice2]->nombre << " ha acabado con " << Jugadores[indice1]->nombre << "\n"; Sleep(1000);
            Jugadores[indice1]->vida = false;
            contador--;
            indice1 = indice2;
        }

    } while (contador > 1);

    std::cout << "\nEl ganador del Battle Royale es: " << Jugadores[indice1]->nombre << "\n";


    system("pause");
    return 0;
}