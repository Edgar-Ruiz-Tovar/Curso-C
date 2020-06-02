#include<stdio.h>
#include<conio.h>
int main()
{
	char nombre[20];
	int edad;
	printf("Introduce el nombre: \n");
	scanf("%s",nombre);
	printf("Introduce la edad: \n");
	scanf("%i",&edad);
	printf("Hola %s de edad %i",nombre,edad);
	getch();
	return 0;
}
