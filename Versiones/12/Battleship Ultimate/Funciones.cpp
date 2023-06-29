#include <iostream>
#include <cctype>
#include "Funciones.h"
#include "Tablero.h"
#include "Acorazado.h"
#include "Jugador.h"
#include <SFML/Audio.hpp>
using namespace std;

int decidirPuntaje(float copia){

    if(copia > 80){
        return 1000;
    }else if(copia > 68){
        return 900;
    }else if(copia > 58){
        return 800;
    }else if(copia > 52){
        return 750;
    }else if(copia > 48){
        return 700;
    }else if(copia > 42){
        return 650;
    }else if (copia > 38){
        return 600;
    }else if(copia > 32){
        return 550;
    }else if(copia > 27){
        return 500;
    }else if(copia > 24){
        return 400;
    }else if(copia > 19){
        return 300;
    }else if(copia > 17){
        return 200;
    }else{
        return 100;
    }

}

int seleccionarBarco(bool &destructorUbicado, bool &fragataUbicada, bool &submarinoUbicado, bool &portaavionesUbicado, bool&acorazadoUbicado){

Destructor miDestructor; // <<--  CREAMOS NUESTROS OBJETOS BARCOS
Fragata miFragata;
Portaaviones miPortaaviones;
Submarino miSubmarino;
Acorazado miAcorazado;

bool cumpla=false;
int opcion;
while(!cumpla){
cout<<endl;
cout<<"QUE EMBARCACION DESEA UBICAR"<<endl;
cout<<endl;
if(destructorUbicado == false){ // 2
    cout<<"1) "<<miDestructor.getNombre()<<endl;}
if(fragataUbicada == false){ // 1
    cout<<"2) "<<miFragata.getNombre()<<endl;}
if(submarinoUbicado == false){ // 3
    cout<<"3) "<<miSubmarino.getNombre()<<endl;}
if(portaavionesUbicado == false){ // 4
    cout<<"4) "<<miPortaaviones.getNombre()<<endl;}
if(acorazadoUbicado == false){// 3
    cout<<"5) "<<miAcorazado.getNombre()<<endl;}

cout<<"Opcion: ";
cin>>opcion;
system("cls");

    if(opcion==1){
            if(destructorUbicado==true){
            cumpla=false;} else{destructorUbicado=true;
                return  miDestructor.getTamanio();}
                }
    else if(opcion==2){
                       if(fragataUbicada==true){
                       cumpla=false;}else{
                            fragataUbicada=true;
                            return miFragata.getTamanio();}}
    else if(opcion==3){
                         if(submarinoUbicado==true){
                            cumpla=false;}
                          else{
                            submarinoUbicado=true;
                            return miSubmarino.getTamanio();}
                     }
    else if(opcion==4){
                            if(portaavionesUbicado==true){
                                cumpla=false;}
                              else{
                                 portaavionesUbicado=true;
                                 return miPortaaviones.getTamanio();}
                        }
    else if(opcion==5){
                             if(acorazadoUbicado==true){
                                cumpla=false;
                             } else{
                                  acorazadoUbicado=true;
                                  return miAcorazado.getTamanio();}
                           }
                    }
}

void reglasYCreditos(){
cout<<"CREDITOS"<<endl;
cout<<endl;
cout<<"LOS ABUELOS DE LA JAVA"<<endl;
cout<<"----------------------"<<endl;
cout<<"GASTON GARCIA"<<endl;
cout<<"RAUL RODRIGUEZ"<<endl;
cout<<"ARIEL RODRIGUEZ"<<endl;
cout<<"GONZALO LIGERO"<<endl;

cout<<"MUSICA de 8BitUniverse en YouTube"<<endl;
cout<<"SONIDOS de freesound.com"<<endl;
cout<<"SPRITES E IMAGENES de opengameart.com y itch.io"<<endl;

cout<<endl;
cout<<endl;
cout<<endl;

cout<<"REGLAS DEL JUEGO"<<endl;
cout<<endl;

cout<<"El juego se basa en el cl�sico Batalla Naval pero con algunas modificaciones"<<endl;
cout<<"Entre los cambios principales se encuentran: "<<endl;
cout<<"La utilizaci�n de aviones contra enemigos normales"<<endl;
cout<<"Tres niveles distintos con jefes con habilidad propia"<<endl;
cout<<"Un nivel secreto desbloqueable mediante un c�digo alfab�tico donde el usuario enfrenta al jefe final"<<endl;

cout<<"BARCOS"<<endl;
cout<<endl;
cout<<"En cuanto al apartado original, el usuario debe ubicar cinco embarcaciones para arrancar una partida, entre las que encontramos: destructor, acorazado, fragata, portaaviones y submarino."<<endl;
cout<<"Cada barco tiene un tama�o determinado, siendo algunos de 1 casillas y otros de 3 � 4."<<endl;
cout<<endl;
cout<<endl;

cout<<"AVIONES"<<endl;
cout<<endl;
cout<<"Existen cuatro tipos de aviones: reconocimiento, dron, caza y bombardero."<<endl;
cout<<"Reconocimiento: le otorga al usuario la posibilidad de elegir 3 filas del rival antes de iniciar la partida."<<endl;
cout<<"Si el avi�n detecta una embarcaci�n en alguna casilla de esas 3 filas elegidas, le dar� las coordenadas exactas al portador del Reconocimiento para que pueda atacarlas."<<endl;
cout<<"En caso contrario, un mensaje indicar� que el reconocimiento no fue exitoso"<<endl;
cout<<endl;
cout<<"Bombardero: le da al usuario la posibilidad de elegir una fila del tablero del rival."<<endl;
cout<<"Previo al inicio de la partida, el avi�n atacar� la fila completa elegida y destruir� a los rivales que detecte en esa fila."<<endl;
cout<<"En caso contrario, se mostrar� al usuario un mensaje indicando que el ataque no fue exitoso."<<endl;
cout<<"Caza: le entrega al usuario la posibilidad de proteger una fila de su tablero contra cualquier ataque de aviones de tipo ofensivo (bombardero o dron)."<<endl;
cout<<" En caso de que el rival escoja un avi�n de ataque y la fila donde est� atacando posea superioridad a�rea, el ataque no ser� exitoso y los aviones del usuario portador del Caza estar�n protegidos contra ese ataque."<<endl;
cout<<endl;
cout<<"Dron: le da al usuario la posibilidad de elegir 3 filas y 3 columnas. De esta manera, el portador puede distribuir sus ataques de una forma m�s equilibrada pero menos potente que la del bombardero."<<endl;
cout<<"En caso de no detectar ning�n enemigo en esas casillas elegidas, el juego lo indicar� con un mensaje en consola."<<endl;


}












