// Operadores lógicos
// https:elcodigoascii.com.ar/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int number;
	//////////////////////////////////////////////////////////////////////////////////////
	// Ejercicio 1
	printf("Ejercicio 1\nIntroduce un n%cmero: \n",163);
	scanf("%i",&number);
	if(number==15)  // ¿Es igual a 15?
		printf("El n%cmero es 15\n",163);
	if(number>15)   // ¿Es mayor a 15?
		printf("El n%cmero es mayor que 15\n",163);
	if(number<15)   // ¿Es menor a 15?
		printf("El n%cmero es menor que 15\n",163);
	getch();
	system("cls");
	//////////////////////////////////////////////////////////////////////////////////////
	// Ejercicio 2
	printf("Ejercicio 2\nIntroduce un n%cmero: \n",163);
	scanf("%i",&number);
	if(number!=9)  // ¿Es diferente de 9?
		printf("Tu n%cmero no es 9\n",163);
	else
		printf("Tu n%cmero es 9\n",163);
	getch();
	system("cls");
	//////////////////////////////////////////////////////////////////////////////////////
	// Ejercicio 3
	printf("Ejercicio 3\nIntroduce un n%cmero: \n",163);
	scanf("%i",&number);
	if(number>0 && number<10)  // Si se cumple que sea mayor a cero y menor que 10, entonces
		printf("Tu n%cmero est%c entre 0 y 10\n",163,160);
	getch();
	system("cls");
	//////////////////////////////////////////////////////////////////////////////////////
	// Ejercicio 4
	printf("Ejercicio 4\nIntroduce un n%cmero: \n",163);
	scanf("%i",&number);
	if(number==0 || number==10)  // Si se cumple que sea igual a 10 ó a 0, entonces
		printf("Tu n%cmero es 0 %c 10\n",163,162);
	getch();
	system("cls");
	//////////////////////////////////////////////////////////////////////////////////////
	// Ejercicio 5
	printf("Ejercicio 5\nIntroduce un n%cmero: \n",163);
	scanf("%i",&number);
	if(number==0 || number==10)  // Si se cumple que sea igual a 10 ó a 0, entonces
		printf("Tu n%cmero es 0 %c 10\n",163,162);
	getch();
	system("cls");
	return 0;
}
/* Ejercicio: hacer un programa que dadas unas coordenadas (x,y) determine en qué cuadrante
   se encuentra el punto*/
