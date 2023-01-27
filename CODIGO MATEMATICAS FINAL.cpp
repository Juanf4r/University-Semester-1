// MATEMATICAS MINA.cpp

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string>

class Jugador
{
public:
    int vida = 100;
};

int main()
{
    srand(time(0));
    Jugador* Manolo = NULL;
    Manolo = new Jugador();

    int opc;
    int dinero = 0;
    int dano = rand() % 50;

    std::string inicio = "si";
    std::string movimientos[4] = { "Has decidido ir de frente","Te moviste a la izquierda","Te moviste a la derecha","Has chocado con algo, decides rodear" };
    std::string acciones[4] = { "Te has encontrado con una piedra","Te chocaste con un camino cerrado","Al parecer escuchaste una voz","Viste algo a lo lejos" };
    std::string decision[3] = { "ENCONTRASTE ORO GENIAL","OH NO, UN BICHO!","No era nada :/" };
    std::string ataques[2] = { "Te ha hecho dano","No te afecta en nada" };
    std::string decision_ataque = "";
    std::string opciones = "";

    std::cout << "\t--------------------------BIENVENIDO A LA MINA--------------------------\n\n"; Sleep(2500);
    std::cout << "Has decidido comenzar una nueva aventura! \n\n"; Sleep(1000);
    std::cout << "Ahora mismo cuentas con " << dinero << " Dolares en Oro\n\n"; Sleep(1000);
    std::cout << "Diviertete recolectando dinero!\n\n"; Sleep(1000);
    std::cout << "Pero siempre recuerda!\n\n"; Sleep(1000);
    std::cout << "La avaricia nunca es buena" << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
    std::cout << "\n\nVAMOS A MINAR!\n\n"; Sleep(777);
    std::cout << "Bajamos a la mina" << "\n\n"; Sleep(777);
    std::cout << "Tocamos el suelo"; std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);

    do
    {
        std::cout << "\n\n" << movimientos[rand() % 4];
        std::cout << "\n\n" << acciones[rand() % 4]; std::cout << "\n\nTienes " << dinero << " Dolares en Oro"; Sleep(777); std::cout << "\n\nQue decides hacer? \n"; Sleep(1000);

        std::cout << "1.- Ignoramos lo que sea\n";  Sleep(1000);
        std::cout << "2.- Decides echar un vistazo\n"; Sleep(1000);
        std::cout << "3.- Decides tomar otro camino\n"; Sleep(1000);
        std::cout << "4.- Salir de la mina\n"; Sleep(1000);
        std::cout << "Tu opcion es: "; std::cin >> opc;

        switch (opc)
        {
        case 1:
            std::cout << "Decidiste ignorar lo que era y seguiste avanzando\n\n"; Sleep(1500);
            break;

        case 2:
            opciones = decision[rand() % 3];

            std::cout << opciones;

            if (opciones == decision[0])
            {
                dinero += rand() % 33;
            }
            else if (opciones == decision[1])
            {
                std::cout << "\nEl bicho te ataca!\n\n"; Sleep(1000);
                decision_ataque = ataques[rand() % 2];
                if (decision_ataque == ataques[0])
                {
                    std::cout << decision_ataque << "\n";

                    std::cout << "Te quita " << dano << " puntos de vida\n\n"; Sleep(1000);

                    if (Manolo->vida > 80)
                    {
                        std::cout << "Pero eres fuerte y continuas adelante!\n"; Sleep(1500);
                    }
                    else if (Manolo->vida > 50)
                    {
                        std::cout << "Todavia puedes aguantar!\n"; Sleep(1500);
                    }
                    else if (Manolo->vida > 25)
                    {
                        std::cout << "Sufres, pero sigues adelante\n"; Sleep(1500);
                    }
                }
                else if (decision_ataque == ataques[1])
                {
                    std::cout << decision_ataque << " \n";

                    std::cout << "Continuas como si nada\n"; Sleep(1500);
                }
            }
            else if (opciones == decision[2])
            {
                std::cout << "\nComo no es nada, continuamos bajando\n"; Sleep(1500);
            }
            Sleep(2000);
            break;

        case 3:
            std::cout << "Decidiste tomar otro camino"; Sleep(1500);
            break;

        case 4:
            std::cout << "\nHas decidido salir de la mina con lo que traes guardado\n"; Sleep(1000);
            std::cout << "\nSaliste con: " << dinero << " Dolares en Oro\n"; Sleep(1500);

            if (dinero == 0)
            {
                std::cout << "\nBueno lo intentamos :/\n"; Sleep(1500);
            }
            else if (dinero > 1)
            {
                std::cout << "Genial Buen Trabajo!\n"; Sleep(1500);
            }
            else if (dinero > 100)
            {
                std::cout << "WOW, ERES INCREIBLE\n"; Sleep(1500);
            }
            inicio = "no";
            break;
        }
    } while (inicio == "si" || inicio == "Si" || inicio == "SI" && Manolo->vida > 0);

    std::cout << "\nEl juego ha terminado\n\n";

    system("pause");
    return 0;
}