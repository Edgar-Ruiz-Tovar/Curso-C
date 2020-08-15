/*
	Ejercicio 1
	Realizar un programa que pida al usuario el nivel de ataque de dos Jugadores y determine cual de
	los dos resultará ganador en una pelea (puede haber empates).
	
	Ejercicio 2
	Realizar un programa que pida al usuario el lado de un cuadrado y nos diga cuánto es
	su perímetro y cuánto vale su área.
	Nota: el perímetro el la suma de todos sus lados y el área es la multiplicación de dos
	de sus lados. 
*/ 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int attack[2],i,l;
	printf("Ejercicio 1\n\n");
	for (i=0;i<2;i++)
	{
		printf("Introduce el ataque del Jugador %i\n",i+1);
		scanf("%i",&attack[i]);
	}
	if(attack[0]>attack[1])
		printf("Gana el Jugador 1\n");
	else if(attack[0]<attack[1])
		printf("Gana el Jugador 2\n");
	else
		printf("Empatan\n");
	getch();
	system("cls");
	printf("Ejercicio 2\n\n");
	printf("Introduce el lado de tu cuadrado\n");
	scanf("%i",&l);
	printf("Su per%cmetro es: %i\n",161,4*l);
	printf("Su %crea es: %i",160,l*l);
	getch();
	return 0;
}
