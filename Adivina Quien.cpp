// Adivina Quien.cpp
//Juan Fernando Aispuro

#include<iostream>
#include<stdlib.h>
#include<string>
#include<windows.h>

int main()
{
    std::string Personaje_1 = "Mario";
    std::string Personaje_2 = "Luigi";
    std::string Personaje_3 = "Peach";
    std::string Personaje_4 = "Bowser";
    std::string Personaje_5 = "Toad";
    std::string Personaje_6 = "Donkey Kong";
    std::string Personaje_7 = "Yoshi";
    std::string Personaje_8 = "Wario";
    std::string Personaje_9 = "Waluigi";
    std::string Personaje_10 = "Rosalina";
    std::string Personaje_11 = "Daisy";
    std::string Personaje_12 = "Birdo";
    std::string decision = "";
    std::string respuesta = "";
    
        std::cout << "\tBienvenido al Adivina Quien de Mario Party Superstars! \n"; Sleep(1000);
        std::cout << "A continuacion contesta las preguntas para adivinar tu personaje! \n"; Sleep(1300);
    do{
        std::cout << "\nTu personaje usa gorra?\n";
        std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 

        if (respuesta == "si")
        {
            std::cout << "\nTu personaje ha salvado princesas?\n";
            std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 
            
            if (respuesta == "si")
            {
                std::cout << "\nTu personaje tiene una M en la gorra?\n";
                std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 

                if (respuesta == "si")
                {
                    std::cout << "\nTu personaje es Mario! :D\n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 
                    if (respuesta == "si")
                    {
                        std::cout << "Genial! Un gusto haber jugado contigo ^^\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nWow, no se quien es :c\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    Sleep(1000);
                }
                else if (respuesta == "no")
                {
                    std::cout << "\nTu personaje es Luigi! :D \n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 
                    if (respuesta == "si")
                    {
                        std::cout << "\nGenial! Un gusto haber jugado contigo ^^\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nEntonces no se quien es :c\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    Sleep(1000);
                }
                Sleep(1000);
            }
            else if (respuesta == "no")
            {
                std::cout << "\nTu personaje es chaparro?\n";
                std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                if (respuesta == "si")
                {
                    std::cout << "\nTu personaje es Wario! :D\n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                    if (respuesta == "si")
                    {
                        std::cout << "\nGenial! Un gusto haber jugado contigo ^^\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nEntonces no se quien es :c\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    Sleep(1000);
                }
                else if (respuesta == "no")
                {
                    std::cout << "\nTu personaje es Waluigi! ^^\n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                    if (respuesta == "si")
                    {
                        std::cout << "\nGenial! Un gusto haber jugado contigo ^^\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nEntonces no se quien es :c\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    Sleep(1000);
                }
                Sleep(1000);
            }
            Sleep(1000);
        }
        else if (respuesta == "no")
        {
            std::cout << "\nTu personaje es una princesa?\n";
            std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 
            if (respuesta == "si")
            {
                std::cout << "\nTu personaje tiene un destello a su lado?\n";
                std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 
                if (respuesta == "si")
                {
                    std::cout << "\nTu personaje es Rosalina! ^^\n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta); 
                    if (respuesta == "si")
                    {
                        std::cout << "\nGenial! Me encanta Rosalina! :D\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision); 
                        
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nWow, no se quien es :c\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision); 
                    }
                }
                else if (respuesta == "no")
                {
                    std::cout << "\nSu personaje es Reina del Reino de los hongos?\n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    if (respuesta == "si")
                    {
                        std::cout << "\nTu personaje es Peach! ^^ \n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                        if (respuesta == "si")
                        {
                            std::cout << "\nGenial! Me encanta peach! :D\n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);

                        }
                        else if (respuesta == "no")
                        {
                            std::cout << "\nWow, no se quien es :c\n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                        }
                        Sleep(1000);
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nTu personaje es Daisy! ^^ \n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                        if (respuesta == "si")
                        {
                            std::cout << "\nGenial! Daisy es cool :D\n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);

                        }
                        else if (respuesta == "no")
                        {
                            std::cout << "\nWow, no se quien es :c\n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                        }
                        Sleep(1000);
                    }
                    Sleep(1000);
                }
                Sleep(1000);
            }
            else if (respuesta == "no")
            {
                std::cout << "\nTu persona es un dinosaurio?\n";
                std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                if (respuesta == "si")
                {
                    std::cout << "\nTu personaje es verde?\n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                    if (respuesta == "si")
                    {
                        std::cout << "\nTu personaje es Yoshi! :D\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                        if (respuesta == "si")
                        {
                            std::cout << "\nQue bien! A mi tambien me gusta Yoshi! ^^\n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                        }
                        else if (respuesta == "no")
                        {
                            std::cout << "\nWow, no se quien es :c\n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                        }
                        Sleep(1000);
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nTu persona es Birdo! :D\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                        if (respuesta == "si")
                        {
                            std::cout << "\nQue bien! A mi no me gusta Birdo :/ \n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                        }
                        else if (respuesta == "no")
                        {
                            std::cout << "\nWow, no se quien es :c\n";
                            std::cout << "Te gustaria volver a intentar?\n";
                            std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                        }
                        Sleep(1000);
                    }
                    Sleep(1000);
                }
                else if (respuesta == "no")
                {
                    std::cout << "\nTu persona es Donkey Kong! :0\n";
                    std::cout << "Escribe si o no: "; std::getline(std::cin, respuesta);
                    if (respuesta == "si")
                    {
                        std::cout << "\nQue bien! Donkey Kong es Epico :D \n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    else if (respuesta == "no")
                    {
                        std::cout << "\nWow, no se quien es :c\n";
                        std::cout << "Te gustaria volver a intentar?\n";
                        std::cout << "Escribe si o no: "; std::getline(std::cin, decision);
                    }
                    Sleep(1000);
                }
                Sleep(1000);
            }
            Sleep(1000);
        }
        Sleep(1000);

    } while (decision == "si");
    system("pause");
    return 0;
}