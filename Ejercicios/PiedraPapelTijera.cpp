/******************************************************************************
Programar una función que nos imprima por pantalla al ganador de un juego de
priedra, papel o tijera. Usar la función:
strcmp(cadena1,cadena2)
La cual tiene valor de retorno 0 si cadena1 es igual a cadena2.
Para usar esa función necesitarás la librería string.h
*******************************************************************************/

#include <stdio.h>
#include <string.h>
void juego(char jugador1[10],char jugador2[10]);
int main()
{
    juego("tijera","papel");
    juego("papel","papel");
    juego("tijera","piedra");

    return 0;
}

void juego(char jugador1[10],char jugador2[10])
{
    // si empatan
    if (strcmp(jugador1,jugador2)==0)
        printf("Empate\n");
    // piedra vs tijera
    else if (strcmp(jugador1,"piedra")==0 && strcmp(jugador2,"tijera")==0)
        printf("El ganador es: Jugador 1\n");
    // tijera vs papel  
    else if (strcmp(jugador1,"tijera")==0 && strcmp(jugador2,"papel")==0)
        printf("El ganador es: Jugador 1\n");
    // papel vs piedra
    else if (strcmp(jugador1,"papel")==0 && strcmp(jugador2,"piedra")==0)
        printf("El ganador es: Jugador 1\n");
    // en cualquier otro caso
    else
        printf("El ganador es: Jugador 2\n");
}
