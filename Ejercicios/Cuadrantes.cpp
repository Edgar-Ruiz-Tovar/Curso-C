/* Ejercicio: hacer un programa que dadas unas coordenadas (x,y) determine en qué cuadrante
   se encuentra el punto*/
   // Operadores lógicos
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define aAcento 160
int main()
{
	int x,y;
	printf("Introduce el valor de x: \n");
	scanf("%i",&x);
	printf("Introduce el valor de y: \n");
	scanf("%i",&y);
	system("cls");
	if(x>=0 && y>=0)
		printf("La coordena (%i,%i) est%c en el primer cuadrante.",x,y,aAcento);
	if(x<=0 && y>=0)
		printf("La coordena (%i,%i) est%c en el segundo cuadrante.",x,y,aAcento);
	if(x<=0 && y<=0)
		printf("La coordena (%i,%i) est%c en el tercer cuadrante.",x,y,aAcento);
	if(x>=0 && y<=0)
		printf("La coordena (%i,%i) est%c en el cuarto cuadrante.",x,y,aAcento);
	return 0;
}
