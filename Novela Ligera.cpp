// Novela Ligera.cpp

#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

void SlowPrint(std::string text, float speed = .08f)
{
    for (int i = 0; i < text.size(); i++)
    {
        std::cout << text[i]; Sleep(777 * speed);
    }   std::cout << "\n";
}

int main()
{
    system("color 0F");
    int opc1 = 0, opc2 = 0, opc3 = 0, opc4 = 0;
    int iniciar = 0;
    bool camino_1 = false,camino_1_5 = false, camino_2 = false, camino_2_1 = false, camino_2_2 = false, camino3 = false;
    do {
        std::cout << "-------------------------NOVELA LIGERA-------------------------\n\n"; Sleep(1500);

        SlowPrint("Son las 11:00 Pm, es de noche y estas acostado\nEstas aburrido y solo en tu habitacion");
        SlowPrint("...", .6f);
        SlowPrint("Recibes un mensaje por Whatsapp\nTu: Un mensaje? Quien sera a estas horas?");
        SlowPrint("Te planteas la idea de contestar, Que haces?\n");
        SlowPrint("1.Decides ver el mensaje\n2.Decides ignorar el mensaje", .05f); std::cin >> opc1;
        switch (opc1)
        {
        case 1:
            SlowPrint("Decides ver el mensaje");
            SlowPrint("Al parecer es tu amiga Hina");
            SlowPrint("Hina: Hola jesus no se si estes despierto pero necesito tu ayuda urgentemente, crees que puedas venir a mi casa a esta hora?");
            SlowPrint("*Te sorprendes*  Hina no es una persona que piense tan facil en invitar a alguien a su casa");
            SlowPrint("Te planteas la idea de ir a su casa");
            SlowPrint("\n1.Decides ir a su casa\n2.Decides ignorarla", .05f); std::cin >> opc2;

            switch (opc2)
            {
            case 1:
                SlowPrint("Decides ir a su casa\nTe sientes cansado pero la preocupacion no te deja en paz\nEn cuestion de 3 minutos te preparas para salir\n"); Sleep(1000);
                SlowPrint("Sales de tu casa y vas en camino a ver a Hina"); Sleep(2000);
                camino_1 = true;
                break;

            case 2:
                SlowPrint("Decides ignorarla\nJesus: No creo que sea tan importante a estas horas");
                camino_2 = true;
                break;
            }
            break;

        case 2:
            SlowPrint("Decides ignorar el mensaje");
            SlowPrint("Tu: No creo que sea tan importante a estas horas"); camino_2 = true;
            break;

        default:SlowPrint("Elige una de las 2 opciones");
            break;
        }

        if (camino_1 == true)
        {
            //Camino a casa de Hina
            SlowPrint("\nEn el camino te das cuenta que todo esta muy solo");
            SlowPrint("Aunque es lo normal ya que son las 11:00Pm");
            SlowPrint("En 7 minutos llegas al departamento de Hina");
            SlowPrint("Estas afuera de su departamento y decides tocar la puerta");
            SlowPrint("Se escuchan unas pisadas y la puerta se abre, es Hina\n");
            SlowPrint("Hina: Jesus, que bueno que estas aqui, por favor pasa... *Habla en un tono bajo*");
            SlowPrint("Jesus: Esta todo bien? Es raro que me invites a estas horas o que de por si me invites");
            SlowPrint("Si esta todo bien, bueno no, miento, no esta todo bien");
            SlowPrint("Hina: Es Nate");
            SlowPrint("Jesus: Que pasa con Nate, pense que tu y el estaban felices juntos");
            SlowPrint("Hina: Ese es el problema que eso es mentira, no estamos nada bien *Empieza a temblar*");
            SlowPrint("Jesus: Okey Hina tranquila primero tomemos asiento por favor");
            SlowPrint("*Ambos se sientan en la sala en un sofa*\n");

            SlowPrint("Hina: Ultimamente Nate y yo hemos hablado muy poco porque lo siento muy distante\nCada vez que he intentando sacar un poco de platicame me contesta muy seco o me ignora");
            SlowPrint("Hina: Pero el verdadero problema fue que un dia lo confronte en la escuela y le dije que tal vez era mejor no ser pareja");
            SlowPrint("Hina: Pensaba que se lo tomaria normal o que le daria igual como ha estado actuando pero en vez de eso me..");
            SlowPrint("Hina: Me dijo que estaba loca, que yo estoy super enamorado de el y que lo que digo son tonterias, cuando me dijo eso le di una cachetada");
            SlowPrint("Hina: Pero eso solo lo hizo enojar..."); Sleep(1500);
            SlowPrint("Jesus: A que te refieres?");
            SlowPrint("Hina: Me contesto con un golpe en la cara y me dijo que era una estupida, me amenazo en que si le contaba a alguien que me golpeo o dijera alguna sola palabra iria a mi casa a desquitarse conmigo");
            SlowPrint("Jesus: Dios...", .2f); SlowPrint("Alguna vez ha ido a tu casa antes?");

            SlowPrint("Hina: Si, una vez que nos preparamos para los examenes vinimos a estudiar juntos pero fue muy incomodo ese dia");
            SlowPrint("Hina: El problema es que no me sentia nada bien y se lo conte a merlina, y no estoy segura pero creo que merlina le dijo a todos");
            SlowPrint("Jesus: Por que crees eso?\nHina: Por esto");
            SlowPrint("*Le muestra el celular: \nNate: !TE LO ADVERTI, ESTAS MUERTA HINA!\n!CUANDO MENOS TE LO ESPERES SABRAS DE MI!"); Sleep(2000);
            SlowPrint("Jesus: Wow, nunca pense que Nate seria asi, has escuchado donde ha estado ultimamente?");
            SlowPrint("Hina: No, no se nada. Tengo mucho miedo Jesus, no quiero estar sola, que deberia de hacer?");
            SlowPrint("*Se te ocurre una idea*\nPodrias invitar a Hina a dormir a tu casa para que se calme");

            do {
                SlowPrint("Te planteas la invitarla a tu casa");
                SlowPrint("\n1.Decides invitarla a tu casa\n2.Decides no decirle nada", .05f); std::cin >> opc4;
                switch (opc4)
                {
                    //Invitas a Hina a tu casa
                case 1:
                    SlowPrint("\nJesus: Que tal si duermes hoy en mi casa y al dia siguiente hablo con Nate, tal vez logre hacerlo entrar en razon");
                    SlowPrint("Hina: Estas seguro? Porque la verdad si me sentiria mas segura en tu casa que aqui");
                    SlowPrint("Jesus: Claro, me gustaria que te sientas segura, ya vere en la escuela que rayos le pasa a Nate");
                    SlowPrint("Hina: Gracias Jesus, eso me tranquiliza un poco, vamonos ya por favor\nJesus: Okey, vamonos ya");
                    SlowPrint("*Ambos salen del departamento*");
                    SlowPrint("Al salir Hina y Jesus se van juntos a casa de Jesus pero Jesus siente algo detras de el, decide voltear a ver");
                    SlowPrint("...", .6f);
                    SlowPrint("Jesus: Al parecer no era nada, fue mi imaginacion");
                    SlowPrint("*Ambos se van caminando y llegan a casa de Jesus\nJesus le acomoda la cama a hina para dormir mientras que el decide dormir en el sofa");
                    SlowPrint("Cierras los ojos y comienzas a roncar");
                    SlowPrint(".....", .6f); camino_1_5 = true;
                    break;

                    //No invitas a Hina a tu casa
                case 2:
                    SlowPrint("\nHina: Esto va a sonar descabellado pero crees que pueda dormir hoy en tu casa?");
                    SlowPrint("*Jesus se sorprende, no sabe que decir*");
                    SlowPrint("Hina: Si seria una molestia?");
                    SlowPrint("Jesus: No no, para nada, claro que eres bienvenida en mi casa");
                    SlowPrint("Hina: Estas seguro? Porque la verdad si me sentiria mas segura en tu casa que aqui");
                    SlowPrint("Jesus: Claro, me gustaria que te sientas segura, ya vere en la escuela que rayos le pasa a Nate");
                    SlowPrint("Hina: Gracias Jesus, eso me tranquiliza un poco, vamonos ya por favor\nJesus: Okey, vamonos ya");
                    SlowPrint("*Ambos salen del departamento*");
                    SlowPrint("Al salir Hina y Jesus se van juntos a casa de Jesus pero Jesus siente algo detras de el, decide voltear a ver");
                    SlowPrint("...", .6f);
                    SlowPrint("Jesus: Al parecer no era nada, fue mi imaginacion");
                    SlowPrint("*Ambos se van caminando y llegan a casa de Jesus\nJesus le acomoda la cama a hina para dormir mientras que el decide dormir en el sofa");
                    SlowPrint("Cierras los ojos y comienzas a roncar");
                    SlowPrint(".....", .6f); 
                    break; camino_1_5 = true;

                default: SlowPrint("Elige una de las 2 opciones");
                    break;
                }
            } while (opc4 == !0);
        }
        else if (camino_2 == true)
        {
            //Camino de no ir a casa de Hina
            SlowPrint("\nEstas muy cansado decides dejar de pensar e irte a dormir");
            SlowPrint("Cierras los ojos y comienzas a roncar");
            SlowPrint(".....", .6f);
            SlowPrint("Es de dia, despiertas a las 8:00 Am , mas tarde de lo habitual pero a tiempo para ir a la escuela");
            SlowPrint("Checas tu horario de clases, afortunadamente no tienes nada hasta las 10:00 Am");
            SlowPrint("Como rutina matutina te das una ducha, te cambias, alistas tu mochila, tomas un breve desayuno para estar listo para la escuela");
            SlowPrint("Haces tu rutina y te quedan 30 minutos para ir a la Universidad, Que haces?");

            SlowPrint("\n1.Decides matar el tiempo jugando Geometry Dash\n2.Decides ir temprano a la Universidad", .05f); std::cin >> opc3;
            switch (opc3)
            {
            case 1:  SlowPrint("Decides matar el tiempo jugando Geometry Dash"); camino_2_1 = true; Sleep(2000);
                break;

            case 2:  SlowPrint("Decides ir temprano a la Universidad"); camino_2_2 = true;
                break;
            }
        }

        if (camino_1_5 == true)
        {
            SlowPrint("\nAl dia siguiente Hina esta mas calmada y ya estaba despierta para cuando Jesus desperto");
            SlowPrint("Son las 8:30Am, Jesus se acerca con Hina para preguntarle como esta");
            SlowPrint("Jesus: Como estas? Te sientes mejor?\nHina: Sip, mas confiada pero no se que pasara en la escuela");
            SlowPrint("No te preocupes, estare contigo en cualquier momento ademas en la escuela con gente dudo que vaya a pasar algo");
            SlowPrint("*Ambos se alistan para ir a la escuela* Por suerte Hina traia su uniforme");
            SlowPrint("Son las 9:30 y ambos salen rapido en camino"); Sleep(1500);
            SlowPrint("Llegaron a la escuela, pero entran a clase 10 minutos tarde\nEl maestro les llama la atencion pero les permite entrar a su clase");
            SlowPrint("Volteas a tu alrededores y todo esta como de costumbre, menos una cosa");
            SlowPrint("Todo el mundo esta murmurando una cosa\nDecides preguntar que es lo que estan diciendo");
            SlowPrint("Merlina: No te enteraste jesus?\nJesus: No, que pasa?\nNate: Esta muerto");
            SlowPrint("Jesus: QUE", .4f); Sleep(1500);

            SlowPrint("\nSe cancelan clases debido a la muerte del Estudiante Nate");
            SlowPrint("La policia llevo una investigacion del caso del Estudiante Nate Thunderman");
            SlowPrint("Se le encontro muerto fuera de los departamentos de Hina");
            SlowPrint("Fallecio atropellado por un taxista borracho que venia de su turno nocturno");
            SlowPrint("Se le encontro con un cuchillo y una foto de Hina, al parecer planeaba hacerle algo");
            SlowPrint("Con la evidencia del Celular de Hina se llevo la conclusion de que Nate estaba a punto de hacerle algo a Hina pero la suerte de que no estuviera en su departamento la salvo");
            SlowPrint("Todo gracias a que Jesus logro leer el mensaje de Hina a tiempo");
            SlowPrint("Me pregunto que hubiese pasado si Jesus no hubiera leido ese mensaje esa noche....?");
        }

        else if (camino_2_1 == true)
        {
            //Llegar tarde a la escuela
            SlowPrint("\nJugaste tanto Geometry Dash que lograste pasarte Theory of Everything");
            SlowPrint("Ves la hora y solo faltan 10 minutos para entrar a clase\nTe apresuras para tomar el camion que te lleva a la escuela");
            SlowPrint("Por poco y no alcanzas a subirte al camion, pero esta lleno de gente");
            SlowPrint(".....", .3f);
            SlowPrint("Llegaste a la escuela, pero entras a clase 10 minutos tarde\nEl maestro te llama la atencion pero te permite entrar a su clase");
            SlowPrint("Volteas a tu alrededores y todo esta como de costumbre, menos una cosa");
            SlowPrint("Tu amiga Hina no esta en la clase\nAlgo muy raro ya que ella siempre es la primera en llegar\nTomas el celular para mandarle un mensaje a Hina");
            SlowPrint("Te das cuenta que tienes varios mensajes perdidos de ella: \n\nHina: Hola jesus no se si estes despierto pero necesito tu ayuda urgentemente, crees que puedas venir a mi casa a esta hora ? ");
            SlowPrint("Hina: Oye Jesus de veras que te necesito, no me siento muy bien y tengo miedo de que vaya a pasar algo");
            SlowPrint("Hina: JESUS, ESTA AQUI JESUS! AYUDAME POR FAVOR ESTA EN MI CASA");
            SlowPrint("....", .3f);
            camino3 = true;
        }
        else if (camino_2_2 == true)
        {
            //Llegar temprano a la escuela
            SlowPrint("\nDecides ir temprano a la Universidad");
            SlowPrint("LLegas a la parada y el camion llega vacio, es tu dia de suerte");
            SlowPrint(".....", .3f);
            SlowPrint("Llegaste a la escuela y entras a clase 10 minutos antes\nEl maestro no ha llegado asi que deciden matar el tiempo");
            SlowPrint("Volteas a tu alrededores y todo esta como de costumbre, menos una cosa");
            SlowPrint("Tu amiga Hina no esta en la clase\nAlgo muy raro ya que ella siempre es la primera en llegar\nTomas el celular para mandarle un mensaje a Hina");
            SlowPrint("Te das cuenta que tienes varios mensajes perdidos de ella: \nHina: Hola jesus no se si estes despierto pero necesito tu ayuda urgentemente, crees que puedas venir a mi casa a esta hora ? ");
            SlowPrint("Hina: Oye Juan de veras que te necesito, no me siento muy bien y tengo miedo de que vaya a pasar algo");
            SlowPrint("Hina: JESUS, ESTA AQUI JESUS! AYUDAME POR FAVOR ESTA EN MI CASA");
            SlowPrint("....", .3f); camino3 = true;
        }

        if (camino3 == true)
        {
            SlowPrint("\nEstas asustado, Nunca te imaginaste recibir esos mensajes en la noche");
            SlowPrint("Si tan solo hubieras leido los mensajes, que habria pasado?");
            SlowPrint("Sales corriendo al departamento de Hina, la clase te da igual");
            SlowPrint("Solo estas rezando encontrar a Hina en su departamento deseando que todo fuese una broma");
            SlowPrint(".....", .6f);

            SlowPrint("*Llegaste a casa de Hina*");
            SlowPrint("La puerta esta entreabierta");
            SlowPrint("De la nada percibes un olor muy feo, tu nariz se asquea en un segundo");
            SlowPrint("Tienes miedo pero decides echar un vistazo");
            SlowPrint("Jesus: HINA? ESTAS AHI? Que es lo que huele tan mal?");
            SlowPrint("Caminas un poco por la sala, no ves nada, pero percibes el sonido de unas moscas en una habitacion");
            SlowPrint("El olor cada vez se hace mas fuerte y temes lo peor");
            SlowPrint("Valientemente decides entrar a la habitacion");
            SlowPrint("Jesus: Hina que estas hacien-", .3f);
            SlowPrint(".....", .6f);

            SlowPrint("\n*Caes de rodillas al suelo* Tus ojos no pueden creer lo que estan viendo");
            SlowPrint("Sin dejar de mirar a Hina dices lo siguiente:");
            SlowPrint("Esto es una broma no?", .2f);
            SlowPrint("Hina esta muerta.....\n\n", .4f);

            SlowPrint("Paso media hora y la policia ha llegado, Jesus les hablo");
            SlowPrint("Jesus quedo tan traumatizado que no fue a la escuela durante un mes entero");
            SlowPrint("La policia llevo acabo una investigacion para encontrar al culpable, pero el celular de hina habia desaparecido y el departamento no tenia huellas de nadie mas que hina");
            SlowPrint("La unica prueba es el celular de Jesus con los mensajes de Hina antes de su muerte");
            SlowPrint("Pasa un tiempo y se lleva a cabo un funeral para Hina");
            SlowPrint("La investigacion ceso y nunca se puedo hallar al asesino, se convirtio en uno de los mayores misterios de la Universidad de Jesus");
            SlowPrint("Tristemente jamas se descubriria la verdad de este caso y tal vez no hubiese pasado esto, si jesus hubiera leido ese mensaje esa noche.....\n\n");
        }

        SlowPrint("Gracias por haber jugado mi juego :D");
        SlowPrint("Espero que el camino que hayas tomado haya salido todo bien");
        SlowPrint("Quieres volver a jugar?");
        SlowPrint("1.Si\n2.No"); std::cin >> iniciar;

    }while (iniciar == 1);

    system("pause");
    return 0;
}