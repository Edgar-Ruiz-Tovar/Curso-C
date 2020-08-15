/*  
	1. Realizar un programa que dada la anchura y altura de un rectángulo lo dibuje con el simbolo *.
	2. Realizar un programa que dado un número me diga a cuál día de la semana corresponde y si es 
    entre semana o fin de semana.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define aAcento 160 //
#define iAcento 161 //  
#define oAcento 162 //  Para los acentos y ñ
#define uAcento 163 //
#define ene 164     //
#define eAcento 130 //

int main()
{
    int dia,i,j,ancho,alto;
    printf("\tEjercicio 1\n\n");
    printf("Introduce el ancho del ret%cngulo: ",aAcento);
    scanf("%i",&ancho);
    printf("Introduce el alto del ret%cngulo: ",aAcento);
    scanf("%i",&alto);
    for(i=0;i<alto;i++)
    {
        for(j=0;j<ancho;j++)
            printf("* ");
        printf("\n");
    }
    getch();
    system("cls");
    printf("\tEjercicio 2\n\n");
    printf("Introduce el d%ca de la semana: ",iAcento);
    scanf("%i",&dia);
    if (dia==1)
        printf("El d%ca es lunes. ",iAcento);
    else if (dia==2)
        printf("El d%ca es martes. ",iAcento);
    else if (dia==3)
        printf("El d%ca es mi%crcoles. ",iAcento,eAcento);
    else if (dia==4)
        printf("El d%ca es jueves. ",iAcento);
    else if (dia==5)
        printf("El d%ca es viernes. ",iAcento);
    else if (dia==6)
        printf("El d%ca es s%cbado. ",iAcento,aAcento);
    else if (dia==7)
        printf("El d%ca es domingo. ",iAcento);
    else
        printf("N%cmero no v%clido",uAcento,aAcento);
    if (dia==6 || dia==7)
        printf("Fin de semana.");
    else
        printf("Entre semana.");
    getch();
    return 0;
}
