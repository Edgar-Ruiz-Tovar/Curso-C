/* Crear un programa que pida al usuario un número, borre la pantalla e	
	imprima su tabla de multiplicación correspondiente*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int numero,i;
	printf("Introduce un numero entero: \n");
	scanf("%i",&numero);
	system("cls");
	printf("La tabla del %i es:\n",numero);
	for(i=1;i<11;i++)
		printf("%ix%i=%i\n",numero,i,i*numero);
	getch();
	return 0;
}
