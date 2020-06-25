// Realiza un programa que dada la edad te imprima la edad recbida +4
#include<stdio.h>
#include<conio.h>
int main()
{
	int edad;
	printf("Introduce tu edad: \n");
	scanf("%i",&edad);
	//edad=edad+4;
	printf("Tu edad despues de 4 años es: %i",edad+4);
	getch();
	return 0;
}
