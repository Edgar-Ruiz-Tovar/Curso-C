/* Crear un programa que le pida al usuario cuánto dinero gastó en el día 1,2,..,7. 
Al final realizar la suma de todo el dinero gastado.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i;
	float dinero[8];
	dinero[7]=0; // para ir guardando la suma
	for(i=0;i<7;i++)
	{
		printf("%cCu%cnto dinero gastaste el d%ca %i? ",168,160,161,i+1);
		scanf("%f",&dinero[i]);
		dinero[7]+=dinero[i];
	}
	system("cls");
	printf("El total gastado es: %f",dinero[7]);
	getch();
	return 0;
}
