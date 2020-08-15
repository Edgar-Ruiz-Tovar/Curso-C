/*  En un videoclub se ofrece la promoción de llevarse tres películas por el precio de las dos más baratas. 
	Haga un programa que, dados los tres precios de las películas, determine la cantidad a pagar. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i;
	float aux,prices[3];
	// Pedimos los precios de las películas y los guardamos en el arreglo prices[].
	for(i=0;i<3;i++)
	{
		printf("Introduce el precio de la pel%cula %i: \n",161,i+1);
		scanf("%f",&prices[i]);
	}
	system("cls");
	// Ordenamos los precio de menor a mayor.
	for(i=0;i<3;i++)
	{
		if(prices[i+1]<=prices[i])
		{
			aux=prices[i+1];
			prices[i+1]=prices[i];
			prices[i]=aux;
		}
	}
	// Imprimimos la suma de los dos primeros que son las dos películas más baratas, ya que los ordenamos.
	printf("EL total a pagar ser%c de %f+%f=%f",160,prices[0],prices[1],prices[0]+prices[1]);
	return 0;
}
